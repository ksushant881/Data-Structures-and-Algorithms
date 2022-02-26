#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,k;
int b[1001],c[1001];
int steps[2000];
int cost[1001];
int fill(){
    f(i,2000)steps[i] = 25;
    steps[1]=0;
    for(int i=1;i<1001;i++){
        for(int x=1;x<=i;x++){
            int j = i+i/x;
            if(j<1001) steps[j]=min(steps[j],steps[i]+1);
        }
    }
}

int cache[1001][12001];

int dp(int i,int k){
    if(i==n) return 0;
    if(cache[i][k]!=-1) return cache[i][k];
    int res = dp(i+1,k);
    if(steps[b[i]]<= k) res = max(res,c[i] + dp(i+1,k-cost[i]));
    cache[i][k]=res;
    return res;
}

void solve(){
    cin>>n>>k;
    f(i,n) cin>>b[i];
    f(i,n) cin>>c[i];

    f(i,n) cost[i]=steps[b[i]];
    int max_op=0;
    f(i,n)max_op+=cost[i];
    max_op=min(max_op,k);
    f(i,n+1){
		f(j,max_op+1)
			cache[i][j] = -1;
	}
    cout<<dp(0,max_op)<<endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;

fill();
f(casess,tc){
    solve();
}
}