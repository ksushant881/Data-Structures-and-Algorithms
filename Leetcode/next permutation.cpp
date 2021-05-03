#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, just reverse nums and done.
// Find the largest index l > k such that nums[k] < nums[l].
// Swap nums[k] and nums[l].
// Reverse the sub-array nums[k + 1:]

void nextPermutation(vector<int>& nums) {
    int n=nums.size();
    int i=-1;
    int k=-1;
    for(k=n-1;k>0;k--){
        if(nums[k-1] < nums[k])
            break;
    }
    k--;
    if(k==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    
    for(i=n-1;i>k;i--){
        if(nums[k] < nums[i]){
            break;
        }
    }
    swap(nums[k],nums[i]);
    sort(nums.begin()+k+1,nums.end());
}

//1 line solution
void nextPermutation(vector<int>& nums) {
        next_permutation(begin(nums),end(nums));
    }

int main(){
fastio
nextPermutation()

}