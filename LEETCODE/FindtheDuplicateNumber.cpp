#include<bits/stdc++.h>
using namespace std;

//binary search cool solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int high = n-1;
        int low=1;
        int ans;
        while(high >= low){
            int mid = (high+low)/2;
            int cnt=0;
            for(int i=0;i<n;i++){
                if(nums[i] <= mid) cnt++;
            }
            if(cnt > mid){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

int main(){

}