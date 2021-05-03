#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    void help(set<vector<int>>&res,vector<int>nums,int n,int i){
        if(i==n){
            res.insert(nums);
            return;
        }
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            help(res,nums,n,i+1);
            swap(nums[i],nums[j]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>res;
        help(res,nums,nums.size(),0);
        vector<vector<int>>r={res.begin(),res.end()};
        return r;
    }

int main(){
fastio

}