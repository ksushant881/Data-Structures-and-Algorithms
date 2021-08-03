#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

vector<int>subsets(vector<int>nums){
    int sizeOfMask = nums.size();
    int maxMask = (1<<sizeOfMask);
    vector<int>res;
    for(int mask=0;mask<maxMask;mask++){
        int curr=0;
        bool flag=false;

        for(int bit=0;bit<sizeOfMask;bit++){
            if(((1<<bit) & mask) != 0){
                if(flag==false){
                    curr = nums[bit];
                    flag=true;
                }
                else{
                    curr = (curr^nums[bit]);
                }
            }
        }
        res.push_back(curr);
    }

    for(auto x:res){
            cout<<x<<" ";
        }
        cout<<endl;
    return res;
}

int max_xor(vector<int>nums){
    vector<int>powerSet = subsets(nums);
    int res=INT_MIN;
    for(int i=0;i<powerSet.size();i++){
        res = max(res,powerSet[i]);
    }
    return res;
}

int main(){
    vector<int>nums={6,3,4};
    cout<<max_xor(nums);
}