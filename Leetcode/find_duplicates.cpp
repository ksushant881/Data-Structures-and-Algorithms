#include<bits/stdc++.h>
using namespace std;
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i] > 0 && nums[nums[i]-1] > 0)
                nums[nums[i]-1]*=-1;
            // else if((nums[nums[i]-1] < 0){

            // }
            else if((nums[i] > 0 && nums[nums[i]-1] < 0) || (nums[i] < 0 && nums[-1*+nums[i]-1] < 0)){
                v.push_back(nums[i]);
            }
        }
        return v;
    }

int main(){
    vector<int>v={4,3,2,7,8,2,3,1};
    vector<int>res=findDuplicates(v);
    for(int x:res)
        cout<<x<<" ";
}