#include<bits/stdc++.h>
using namespace std;

//TLE solution
class Solution {
public:
    
    int help(vector<int>&coins,int n,int amount,int count){
        if(amount==0) return count;
        if(amount<0) return INT_MAX;
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            res=min({res,help(coins,n,amount-coins[i],count+1)});
        }
        return res;
    }

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int ans=help(coins,n,amount,0);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};

class Solution2 {
public:

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int dp[amount+1][n+1];
        for(int i=0;i<=n;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<=amount;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=amount;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=dp[i][j-1];
                if(coins[j-1]<=i)
                    dp[i][j]+=dp[i-coins[j-1]][j];
            }
        }
        for(int i=0;i<=amount;i++){
            for(int j=0;j<=n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[amount][n];
    }
};

class Solution3 {
public:

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1,amount+1);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int j=0;j<n;j++){
                if(coins[j]<=i){
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        return dp[amount]>amount?-1:dp[amount];
    }
};

int main(){
vector<int>v={1,2,5};
Solution2 s;
s.coinChange(v,11);

}