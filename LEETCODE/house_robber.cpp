#include<bits/stdc++.h>
using namespace std;

//recursive solution
//gave TLE
int help(vector<int>nums , int i){
        if(i == 0)
            return nums[0];
        if( i < 0)
            return 0;
        return max(nums[i]+help(nums,i-2),help(nums,i-1));
    }
    
    int rob(vector<int>& nums) {
        return help( nums , nums.size()-1);
    }

//DP solution
//nick white explained it best
int rob(vector<int>nums)
    {
        int n=nums.size();
        int dp[n+1];
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=1;i<n;i++){
            dp[i+1]=max(nums[i]+dp[i-1],dp[i]);
        }
        return dp[n];
    }

int main(){

}