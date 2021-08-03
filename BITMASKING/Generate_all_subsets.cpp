#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

void print(vector<vector<int>>res){
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int>>subsets(vector<int>nums,int n){
    int sizeOfMask = n;
    int maxMask = (1<<sizeOfMask);
    vector<vector<int>>res;
    for(int mask = 0; mask < maxMask ; mask++){
        vector<int>subset;
        for(int j=0;j<sizeOfMask;j++){
            if(((1<<j) & mask) != 0){
                subset.push_back(nums[j]);
            }
        }
        res.push_back(subset);
    }   
    return res;
}

int main(){
    vector<int>v={1,2,3};
    print(subsets(v,3));
}