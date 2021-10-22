#include<bits/stdc++.h>
using namespace std;

//populating dp array using strategy first use only 1 as perfect square
//then 4
//then 9...
//using previous states in every new value of perfect square
class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i*i<=n;i++){
            int curr=i*i;
            for(int j=curr;j<=n;j++){
                dp[j]=min(dp[j-curr]+1,dp[j]);
            }
        }
        return dp[n];
    }
};

int main(){

}