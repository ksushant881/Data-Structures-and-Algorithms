#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=-1;
        }
        int ans=0;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
            if(nums[i]==0) ans=i+1;
        }
        return ans;
    }
};

int main(){
Solution s;
vector<int>arr={0,1,0,1,0,0,0,1,1,1};
s.findMaxLength(arr);

}