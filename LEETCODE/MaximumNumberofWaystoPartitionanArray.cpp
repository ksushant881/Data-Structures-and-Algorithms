#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int waysToPartition(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++) prefix[i]=prefix[i-1]+nums[i];
        for(int pivot=1;pivot<n;pivot++){
            
        }
    }
};

int main(){

}