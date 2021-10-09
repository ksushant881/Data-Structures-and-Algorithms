#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int even=0;
        int odd=1;

        while(odd < n && even < n){
            if(nums[odd]%2 == 0 && nums[even]%2 != 0){
                swap(nums[even],nums[odd]);
                even+=2;
                odd+=2;
            }
            else if(nums[odd]%2 == 0 && nums[even]%2 == 0){
                even+=2;
            }
            else{
                odd+=2;
            }
        }
        return nums;
    }
};

int main(){
    vector<int>arr={4,2,5,7};
    Solution s;
    s.sortArrayByParityII(arr);
    for(auto x: arr){
        cout<<x<<" ";
    }
}