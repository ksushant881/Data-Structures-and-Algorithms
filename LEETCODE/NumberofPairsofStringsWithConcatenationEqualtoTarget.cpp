#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                else{
                    if(nums[i]+nums[j] == target) ans++;
                }
            }
        }
        return ans;
    }
};

int main(){

}