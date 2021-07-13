#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution1 {
public:
    int getLen(vector<int>nums,int currIndex,int currVal,int length){
        if(currIndex == nums.size()-1){
            return length;
        }
        int res = INT_MIN;
        for(int i=currIndex+1;i<nums.size();i++){
            if(nums[i] > currVal){
                res = max({res,
                        getLen(nums,i,nums[i],length+1),
                        getLen(nums,i,currVal,length)
                        });
            }
        }
        return res;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n;i++){
            res = max(res,getLen(nums,i,nums[i],1));
        }
        return res;
    }
};

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            int res=0;
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j]){
                    res = max(dp[j],res);
                }
            }
            dp[i] = res + 1;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};

class Solution3{
    public:
    int ceilSearch(vector<int>&tail,int target){
        int high = tail.size()-1;
        int low = 0;
        //cout<<low<<" "<<high<<" "<<tail.size()-1<<" here"<<endl;
        while(high > low){
            int mid = (high - low)/2 + low;
            if(tail[mid] >= target){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return high;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>tail;
        tail.push_back(nums[0]);
        int idx = 0;
        for(int i=1;i<n;i++){
            if(nums[i] > tail[idx]){
                idx++;
                tail.push_back(nums[i]);
            }
            else{
                int temp = ceilSearch(tail,nums[i]);
                tail[temp] = nums[i];
            }
        }

        // for(auto x:tail){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        return ++idx;
    }
};

int main(){
    vector<int>v1={10,9,2,5,3,7,101,18};
    vector<int>v2={0,1,0,3,2,3}; // 0 1 2 3
    vector<int>v3={7,7,7,7,7,7,7};
    vector<int>v4={1,3,6,7,9,4,10,5,6}; 

    Solution3 s;
    
    cout<<s.lengthOfLIS(v1)<<endl;
    cout<<s.lengthOfLIS(v2)<<endl;
    cout<<s.lengthOfLIS(v3)<<endl;
    cout<<s.lengthOfLIS(v4)<<endl;

}