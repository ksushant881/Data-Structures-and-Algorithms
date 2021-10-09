#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[j] - nums[i])==k) count++;
            }
        }
        return count;
    }
};

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        map<int,int>mp;
        for(auto x:nums){
            if(mp.count(k+x)) count+=mp[k+x];
            if(mp.count(x-k)) count+=mp[x-k];
            mp[x]++;
        }
        return count;
    }
};

int main(){
    vector<int>nums1={1,2,2,1};
    vector<int>nums2={1,3};
    vector<int>nums3={3,2,1,5,4};
    Solution s;
    cout<<s.countKDifference(nums1,1)<<endl;
    cout<<s.countKDifference(nums2,3)<<endl;
    cout<<s.countKDifference(nums3,2)<<endl;
}