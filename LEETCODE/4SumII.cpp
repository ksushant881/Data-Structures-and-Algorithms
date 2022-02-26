#include <bits/stdc++.h>
using namespace std;

//TLE solution
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        map<int,int>mp;
        for(auto x:nums4) mp[x]++;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    int sum = nums1[i] + nums2[j] + nums3[k];
                    if(mp.find(-sum)!=mp.end()) {
                        cnt+=mp[-sum];
                    }
                }
            }
        }
        return cnt;
    }
};

//O(n^2) solution passed
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        map<int,int>mp1,mp2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp1[nums1[i]+nums2[j]]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp2[nums3[i]+nums4[j]]++;
            }
        }
        int cnt=0;
        for(auto x:mp1){
            int k = x.first;
            int m = x.second;
            if(mp2.find(-k)!=mp2.end()){
                cnt+=(m*mp2[-k]);
            }
        }
        return cnt;
    }
};

int main(){

}