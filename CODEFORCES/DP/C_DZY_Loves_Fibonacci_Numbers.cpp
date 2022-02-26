#include<bits/stdc++.h>
#define ll long long 
#define mp make_pair 
#define f(i,n) for(int i=0;i<n;i++) 
#define F first 
#define S second 
#define pb push_back 
 
using namespace std;
 
const int N = 300005;
 
ll fib[N];
 
ll fibPre[N];
 
ll mod = 1e9 + 9;
 
ll a[N];
 
void pre() {
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	for(int i=3;i<N;i++)
		fib[i] = (fib[i-1] + fib[i-2])%mod;
	fibPre[0] = 0;
	for(int i=1;i<N;i++)
		fibPre[i] = (fibPre[i-1] + fib[i])%mod;
}
 
ll fibLR(ll l,ll r) {
	if(l > r)
		return 0;
	
	ll res = (fibPre[r] - fibPre[l-1] + mod)%mod;
	return res;
}
 
vector<pair<int,int> > queries;
 
pair<ll,ll> fibShift(pair<ll,ll> cur , int steps) {
	// prev , cur 
	
	// cur ,  prev + cur
	// prev + cur, prev + 2*cur
	// prev + 2*cur , 2*prev + 3*cur
	
	
	ll first = (fib[steps] * cur.S)%mod + (fib[steps-1] * cur.F)%mod;
	ll second = (fib[steps+1] * cur.S)%mod + (fib[steps] * cur.F)%mod;
	
	return {first%mod, second%mod};
	
}
pair<ll,ll> arr[N];
ll brr[N];
void update() {
	
	for(auto x: queries) {
		int l = x.F, r = x.S;
		arr[l].F+=fib[0];
		arr[l].S+=fib[1];
		
		arr[l].F%=mod;
		arr[l].S%=mod;
		
		pair<ll,ll> rPlus1 = fibShift({0,1} , r - l + 1);
		arr[r+1].F -= rPlus1.F;
		arr[r+1].S -= rPlus1.S;
		
		arr[r+1].F = (arr[r+1].F + mod)%mod;
		arr[r+1].S = (arr[r+1].S + mod)%mod;
	} 	
 
	f(i,N)brr[i] = 0;
	f(i,N-1){
		
		arr[i+1].F += arr[i].S;
		arr[i+1].S += (arr[i].F + arr[i].S)%mod;
		
		arr[i+1].F %= mod;
		arr[i+1].S %= mod;
		
		brr[i] = arr[i].S;
		arr[i] = {0,0};
	}
	
	
	for(int i=1;i<N;i++)
		brr[i] = (brr[i] + brr[i-1])%mod;
	
	f(i,N){
		a[i] = (a[i] + brr[i])%mod;
	}
 	
	queries.clear();
}
 
 
 
void test(){
	f(i,N) arr[i] = {0,0};
	ll n,m;
	cin>>n>>m;
	f(i,n)cin>>a[i+1];
	
	for(int i=1;i<=n;i++)
		a[i] = a[i] + a[i-1];
		
	while(m--){
		int qt;
		cin>>qt;
		int l,r;
		cin>>l>>r;
		if(qt==1){
			queries.pb({l,r});
		} else {
			if(queries.size() >= 550) {
				update();
			}
			ll res = (a[r] - a[l-1] + mod)%mod;
			for(auto qu : queries) {
				int start = max(qu.F , l);
				int end = min(qu.S, r);
				
				ll temp = fibLR(start - qu.F + 1, end - qu.F + 1);
				res = (res + temp)%mod;
			}
			cout<<res<<"\n";
		}
	}
	
}
 
int main(){
	pre();
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tests=1;
	// cin>>tests;
	while(tests--){
		test();
	}
}