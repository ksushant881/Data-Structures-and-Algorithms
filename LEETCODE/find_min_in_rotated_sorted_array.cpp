#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int findMin(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        while(high>low){
            int mid=(high+low)/2;
            if(nums[mid] > nums[high])
                low=mid+1;
            else
                high=mid;
        }
        return nums[high];
    }

int main(){
fastio

}