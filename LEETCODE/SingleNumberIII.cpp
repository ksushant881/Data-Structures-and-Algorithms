#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long
    vector<int> singleNumber(vector<int>& nums) {
        ll n = nums.size();
        ll temp=nums[0];
        for(ll i=1;i<n;i++){
            temp=temp^nums[i];
        }
        ll k=temp&(~(temp-1));
        ll x=0,y=0;
        for(ll i=0;i<n;i++){
            if(nums[i]&k) x=x^nums[i];
            else y=y^nums[i];
        }
        return {(int)x,(int)y};
    }
};

int main(){

}