#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long

//DP solution but gives TLE
//O(n*k*k) ==> 10^9 ofcourse TLE
class Solution1 {
public:
    #define mod 1000000007
    #define ll long long
    void print(vector<vector<ll>>dp){
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    int kInversePairs(int n, int k) {
        //cout<<"hello";
        vector<vector<ll>>dp(n+1,vector<ll>(k+1,0));
        //print(dp);
        for(int i=1;i<n+1;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                ll sum=0;
                for(int m=j;m>=max(0,j-i+1);m--){
                    sum+=(dp[i-1][m]%mod);
                }
                dp[i][j] = sum;
            }
        }
        //cout<<"hello";
        print(dp);
        return dp[n][k];
    }
};

//DP solution with optimizations
//O(n*k)
class Solution {
public:
    #define mod 1000000007
    #define ll long long
    void print(vector<vector<ll>>dp){
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    int kInversePairs(int n, int k) {
        vector<vector<ll>>dp(n+1,vector<ll>(k+1,0));

        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                ll sum=0;
                sum = (dp[i][j-1] + dp[i-1][j])%mod;
                if(j-i >=0 ) {
                    sum = (sum - dp[i-1][j-i])%mod;
                }
                dp[i][j] = sum;
            }
        }
        //cout<<"hello";
        print(dp);
        return dp[n][k];
    }
};

int main(){

Solution s;
cout<<s.kInversePairs(10,10);

}