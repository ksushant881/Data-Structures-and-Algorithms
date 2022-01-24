#include <bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    bool winnerSquareGame(int n) {
        return help(n);
    }

    bool help(int n){
        if(n == 0) return false;
        for(int i=1;i*i<=n;i++){
            if(!help(n-i*i)) return true;
        }
        return false;
    }
};

class Solution2 {
public:
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,-1);
        return help(n,dp);
    }

    bool help(int n,vector<int>&dp){
        if(n == 0) return false;
        if(dp[n] != -1) return dp[n];
        for(int i=1;i*i<=n;i++){
            if(!help(n-i*i,dp)) {
                dp[n]=1;
                return true;
            }
        }
        dp[n] = 0;
        return false;
    }
};

class Solution3 {
public:
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(dp[i-j*j] == 0) dp[i]=1;
            }
        }
        return dp[n];
    }

    bool help(int n,vector<int>&dp){
        if(n == 0) return false;
        if(dp[n] != -1) return dp[n];
        for(int i=1;i*i<=n;i++){
            if(!help(n-i*i,dp)) {
                dp[n]=1;
                return true;
            }
        }
        dp[n] = 0;
        return false;
    }
};

int main(){

}