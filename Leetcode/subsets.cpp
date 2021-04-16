#include<bits/stdc++.h>
using namespace std;

//watchout a good concept here

    void help(vector<int>nums,vector<vector<int>>&v,int i,vector<int>temp){
        if(i==nums.size()){
           v.push_back(temp);
            return;
        }  
        help(nums,v,i+1,temp); 
        temp.push_back(nums[i]);
        help(nums,v,i+1,temp);
         
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>temp;
        help(nums,v,0,temp);
        return v;
    }

int main(){

}