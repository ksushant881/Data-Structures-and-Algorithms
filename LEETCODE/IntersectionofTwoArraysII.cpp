#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        // for(auto x:nums1){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(auto x:nums2){
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        int n1=nums1.size();
        int n2=nums2.size();
        int p1=0;
        int p2=0;
        vector<int>res;
        while(p1 < n1 && p2 < n2){
            if(nums1[p1] > nums2[p2]){
                p2++;
            }
            else if(nums1[p1] < nums2[p2]){
                p1++;
            }
            else{
                res.push_back(nums1[p1]);
                p1++;
                p2++;
            }
        }
        return res;
    }
};

int main(){
    vector<int>nums1 = {4,7,9,7,6,7};
    vector<int>nums2 = {5,0,0,6,1,6,2,2,4};

    Solution s;
    vector<int>res=s.intersect(nums1,nums2);
    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;
}