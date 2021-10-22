#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        // for(auto x:pre){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int ans=INT_MAX;
        for(int i=n;i>=0;i--){
            int high=i,low=0;
            int tempAns;
            while(high>=low){
                int mid = (high+low)/2;
                if(pre[i]-pre[mid] >= target){
                    // for(int j=mid+1;j<=i;j++){
                    //     cout<<nums[j]<<" ";
                    // }
                    // cout<<endl;
                    tempAns = i-mid;
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            ans=min(ans,tempAns);
        }
        return ans;
    }
};

int main(){
    vector<int>nums1={2,3,1,2,4,3};
    vector<int>nums2={1,4,4};
    Solution s;
    cout<<s.minSubArrayLen(7,nums1)<<endl;
    cout<<s.minSubArrayLen(4,nums2)<<endl;
}