#include<bits/stdc++.h>
using namespace std;

int jumpsHelp(vector<int>nums,int n){
    if( n == 1)
        return 0;

    int res;
    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(i+nums[i]>=n-1){
            res=jumpsHelp(nums,i+1)+1;
            if(res < ans)
                ans=res;
        }
    }
    return ans;
}

int jump(vector<int>nums){
    int n=nums.size();
    return jumpsHelp(nums,n);

} 

//dp solution
int solve(vector<int>nums,int n){
    int dp[n];
    fill(dp,dp+n,INT_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(j + nums[j] >= i){
                dp[i]=min(dp[j]+1,dp[i]);
            }
        }
    }
    return dp[n-1];
}

int main(){

}