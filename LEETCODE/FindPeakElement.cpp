#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0] > nums[1]){
            return 0;
        }
        if(nums[n-1] > nums[n-2]){
            return n-1;
        }
        int high = n-1;
        int low = 0;
        while(high > low){
            int mid = (high - low)/2 + low;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }
            else if(nums[mid+1] > nums[mid]){
                low = mid+1;
            }
            else if(nums[mid-1] > nums[mid]){
                high = mid;
            }
        }
        return low;
    }
};

int main(){

}