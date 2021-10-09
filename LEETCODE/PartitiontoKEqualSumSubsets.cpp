#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // bool correctMaskCheck(int n,int k){
    //     int c=0;
    //     while(n){
    //         n=n&(n-1);
    //         c++;
    //     }
    //     return (c==k);
    // }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        if(sum%k!=0) return false;
        int target=sum/k;
        vector<int>dp((1<<n),-1);
        dp[0]=0;

        for(int masks=0;masks<(1<<n);masks++){
            if(dp[masks]==-1) continue;
            for(int i=0;i<n;i++){
                if((masks & (1<<i)) && dp[masks] + nums[i] <= target){
                    dp[masks | (1<<i)] = (dp[masks] + nums[i]) % target;
                }
            }
        }
        return dp[(1<<n)-1] == 0;
    }
};

int main(){

}