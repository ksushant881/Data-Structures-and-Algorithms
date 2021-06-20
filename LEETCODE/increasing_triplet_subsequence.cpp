#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//O(n^3) solution
     bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j] && nums[j]<nums[k])
                        return true;
                }
            }
        }
        return false;
     }

//O(n^2) solution
     bool increasingTriplet(vector<int>& nums) {
         int n=nums.size();
         int arr[n];
         arr[0]=1;
         for(int i=1;i<n;i++){
             arr[i]=1;
             for(int j=0;j<i;j++){
                 if(nums[i]>nums[j])
                     arr[i]=max(arr[i],arr[j]+1);
                 if(arr[i]==3)
                     return true;
             }
         }
         return false;
     }

//O(nlog(n)) solution
    bool increasingTriplet(vector<int>& nums) {
        
    }

int main(){
fastio

}