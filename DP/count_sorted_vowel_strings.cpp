#include<bits/stdc++.h>
using namespace std;

int countVowelStrings(int n) {
        vector<vector<int>>dp(n+1,vector<int>(5,0));
        dp[1][0]=1;
        dp[1][1]=1;
        dp[1][2]=1;
        dp[1][3]=1;
        dp[1][4]=1;
        for(int i=2;i<=n;i++){
            int sum=0;
            for(int j=0;j<5;j++){
                sum+=dp[i-1][j];
            }
            dp[i][0]=sum;
            dp[i][1]=sum-dp[i-1][0];
            dp[i][2]=sum-dp[i-1][1]-dp[i-1][0];
            dp[i][3]=sum-dp[i-1][2]-dp[i-1][1]-dp[i-1][0];
            dp[i][4]=sum-dp[i-1][3]-dp[i-1][2]-dp[i-1][1]-dp[i-1][0];
        }
        return dp[n][0]+dp[n][1]+dp[n][2]+dp[n][3]+dp[n][4];
    }

int main(){
    


}