#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,x;
int arr[101][2];

int cache[10001][101];

int dp(int cu,int i){
    if(i>n){
        if(cu==0) return 1;
        else return 0;
    }
    int res=0;
    if(cache[cu][i]!=-1)return cache[cu][i];
    if(cu-arr[i][0]>=0) res=dp(cu-arr[i][0],i+1);
    if(cu-arr[i][1]>=0) res = res|dp(cu-arr[i][1],i+1);
    cache[cu][i]=res;
    return res;
}

void solve(){
    cin>>n>>x;
    f(i,n){
        cin>>arr[i][0]>>arr[i][1];
    }
    if(dp(x,0)) cout<<"Yes";
    else cout<<"No";
}

int main(){
fastio
int tc=1;
memset(cache,-1,sizeof(cache));
// cin >> tc;
f(casess,tc){
   solve();
}
}