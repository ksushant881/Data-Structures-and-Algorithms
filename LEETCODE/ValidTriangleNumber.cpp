#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        sort(nums.begin(),nums.end());
        for(int high=2;high<n;high++){  //fixed max length
            int low = 0;
            int mid = high - 1;
            while(mid > low){
                if(nums[low] + nums[mid] > nums[high]){
                    res += mid - low;
                    mid--;
                }
                else{
                    low++;
                }
            }
        }
        return res;
    }
};

int main(){

}