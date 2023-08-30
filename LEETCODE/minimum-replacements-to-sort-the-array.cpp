#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long cnt = 0;
        int prev = nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i] > prev){
                int steps = ceil(nums[i]/(1.0 * prev)) - 1;
                cnt+=steps;
                prev = min(prev, nums[i]/(steps+1));
            } else {
                prev = nums[i];
            }
        }
        return cnt;
    }
};

int main(){
    
}