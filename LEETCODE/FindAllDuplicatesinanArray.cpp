#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1] < 0){
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]*=-1;
        }
        return ans;
    }
};

int main(){

}