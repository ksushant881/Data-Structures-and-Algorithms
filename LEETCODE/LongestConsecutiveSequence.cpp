#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        sort(nums.begin(),nums.end());
        for(auto x:nums) cout<<x<<" ";
        cout<<endl;
        int ans=0;
        vector<int>diff(n,1);
        diff[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1] == 1) 
                diff[i]=diff[i-1]+1;
            ans=max(ans,diff[i]);
        }
        return ans;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        unordered_map<int,int>mp;
        for
    }
};

int main(){
vector<int>v={0,3,7,2,5,8,4,6,0,1};
Solution1 s;
cout<<s.longestConsecutive(v);


}