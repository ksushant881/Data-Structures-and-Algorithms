#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<n && count<=1;i++){
            if(nums[i-1]>nums[i]){
                count++;
                if(i-2<0 || nums[i-2]<=nums[i])
                    nums[i-1]=nums[i];
                else
                    nums[i]=nums[i-1];
            }
        }
        return count<=1;
    }

int main(){
fastio

}