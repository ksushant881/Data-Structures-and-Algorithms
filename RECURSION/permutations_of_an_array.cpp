#include<bits/stdc++.h>
using namespace std;

void pre(vector<int>nums,int n,int index,vector<vector<int>>&v){
        
        if(index==n){
            v.push_back(nums);
            return;
        }
        
        for(int j=index;j<n;j++){
            swap(nums[index],nums[j]);
            pre(nums,n,index+1,v);
            swap(nums[index],nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>v;
        pre(nums,n,0,v);
        return v;
        
    }

int main(){
    
}