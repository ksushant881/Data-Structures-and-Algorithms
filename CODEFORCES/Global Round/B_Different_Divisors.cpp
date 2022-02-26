#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime[100005];
vector<int>v;
void fun(){
    memset(isPrime,1,sizeof(isPrime));
    isPrime[1]=0;
    for(int i=2;i<100005;i++){
        if(isPrime[i]){
            for(int j=i+i;j<100005;j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=1;i<100005;i++){
        if(isPrime[i]) v.push_back(i);
    }
    // for(auto x:v) cout<<x<<" ";
    // cout<<endl;
}

int solve1(int n){
    int low=0,high=v.size()-1;
    int ans=-1;
    while(high>=low){
        int mid = (low+high)/2;
        if(v[mid]<n) low=mid+1;
        else {
            ans=mid;
            high=mid-1;
        }
    }
    return v[low];
}

void solve(){
    ll d;
    cin>>d;
    ll ans=1;
    ll x=solve1(1+d);
    ll y = solve1(x+d);
    cout<<x*y<<endl;

}

int main(){
fastio
int tc=1;
cin >> tc;
fun();
f(casess,tc){
   solve();
}
}