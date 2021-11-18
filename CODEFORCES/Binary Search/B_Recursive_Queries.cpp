#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
#define MAX (int)2e6

int arr[MAX];
vector<vector<int>>dp(10,vector<int>(MAX,0));

void solve(){
    int l,r,k;
    cin>>l>>r>>k;
    cout<<dp[k][r]-dp[k][l-1]<<endl;
}

int val(int n){
    if(n<10) return n;
    int p=1;
    for(;n;n/=10){
        if(n%10){
            p*=n%10;
        }
    }
    return val(p);
}

void preCompute(){
    for(int i=1;i<MAX;i++){
        ++dp[val(i)][i];
    }
    for(int i=1;i<=9;i++){
        for(int j=2;j<MAX;j++){
            dp[i][j]+=dp[i][j-1];
        }
    }
}


signed main(){
fastio
int tc=1;
preCompute();
cin >> tc;
f(casess,tc){
   solve();
}
}