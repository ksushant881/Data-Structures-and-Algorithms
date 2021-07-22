#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i] = min(right[i+1],nums[i]);
        }
        int ans = 0;
        for(int i=0;i<n-1;i++){
            if(left[i] <= right[i+1]){
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};

class Solution2 {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int local=nums[0];
        int global=nums[0];
        int res=0;
        for(int i=1;i<n;i++){
            if(nums[i] < local){
                res = i;
                local = max(local,global);
            }
            else{
                global = max(global,nums[i]);
            }
        }
        return res+1;
    }
};

int main(){

}