#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int res=0,ans=0;
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                ans++;
            }
            else{
                ans=0;
            }
            res = max(res,ans);
        }
        return res;
    }
};

int main(){

}