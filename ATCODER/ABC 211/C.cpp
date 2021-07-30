#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int solve(string a, string b){
    int n1=a.length();
    int n2=b.length();
    vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
    for (int i=0; i <= n2; ++i) dp[0][i]=0;
    for (int i=0; i <= n1; ++i) dp[i][0]=1;
    for (int i=1; i <= n1; i++){
        for (int j=1; j <= n2; j++){
            if (a[i-1] == b[j-1])
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;

            else
                dp[i][j]=dp[i - 1][j];
        }
    }
    return dp[n1][n2]%mod;
}

int main(){
    fastio

    ll tc=1;
    //cin >> tc;
    for (ll cassess=1; cassess <= tc; cassess++){
        string s;
        cin >> s;
        string target="chokudai";
        int res=1;
        int n=s.length();
        cout<<solve(s,target);
    }
}