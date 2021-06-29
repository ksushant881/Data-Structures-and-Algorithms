#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        while(i<n){
            if(nums[i]==0) k--;
            if(k<0){
                if(nums[j]==0) k++;
                j++;
            }
            i++;
        }
        return i-j;
    }
};

int main(){



}