#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long
    #define mod 1000000007
    void print(vector<vector<ll>>dp){
        for(auto x:dp){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
    
    int countVowelPermutation(int n) {
        vector<vector<ll>>dp(n+1,vector<ll>(6,0));
        
        for(ll i=1;i<=5;i++){
            dp[0][i]=0;
            dp[1][i]=1;
        }
        
        int res = 0;
        
        for(ll i=2;i<=n;i++){
            dp[i][1] = (dp[i-1][2] + dp[i-1][3] + dp[i-1][5])%mod;
            dp[i][2] = (dp[i-1][1] + dp[i-1][3])%mod;
            dp[i][3] = (dp[i-1][2] + dp[i-1][4])%mod;
            dp[i][4] = (dp[i-1][3])%mod;
            dp[i][5] = (dp[i-1][3] + dp[i-1][4])%mod;
        }
        
        res = (dp[n][1] + dp[n][2] + dp[n][3] + dp[n][4] + dp[n][5])%mod;;
        //print(dp);
        
        return res;
    }
};

int main(){

Solution s;
s.countVowelPermutation(100);

}