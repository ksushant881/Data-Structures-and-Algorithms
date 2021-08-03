#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

vector<vector<int>>res;
void solve(vector<int>&nums,int i,vector<int>&curr){
    if(i==nums.size()){
        res.push_back(curr);
        return;
    }
    solve(nums,i+1,curr);
    curr.push_back(nums[i]);
    solve(nums,i+1,curr);
    curr.pop_back();
}

void print(vector<vector<int>>&v){
    for(auto x:v){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int>nums={1,2,3};
    vector<int>temp;
    solve(nums,0,temp);
    print(res);
}   