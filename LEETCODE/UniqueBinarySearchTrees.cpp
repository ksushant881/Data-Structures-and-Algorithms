#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
    vector<int>dp(n+1,0);
    if(n==1) return 1;
    if(n==2) return 2;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 5;
    for(int i=4;i<=n;i++){
        for(int j=1;j<=i;j++){
            int left = dp[j-1];
            int right = dp[i-j];
            int ans=1;
            if(left!=0) ans*=left;
            if(right!=0) ans*=right;
            dp[i] += ans;
        }
    }
    // for(auto x:dp){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    return dp[n]; 
    }
};

int main(){

}