#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;
        if(n==1 && nums[0]==target)
        {
            res.push_back(0);
            res.push_back(0);
            return res;
        }
        
        
        int high=n-1;
        int low=0;
        while(high>=low){
            int mid=(high+low)/2;
            if(nums[mid]==target){
                int inx=mid;
                while(inx>=0 && nums[inx]==target){
                    inx--;
                }
                res.push_back(inx+1);
                inx=mid;
                while(inx<n && nums[inx]==target){
                    inx++;
                }
                res.push_back(inx-1);
                break;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
        }
        if(res.size()==0){
            res.push_back(-1);
            res.push_back(-1);
        }
        return res;
    }

int main(){
fastio

}