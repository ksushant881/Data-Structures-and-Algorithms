#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int minimumValueSum(vector<int>& nums, vector<int>& andValues) {
        int n = nums.size();
        int m = andValues.size();
        int currAnd =nums[0],j=0;
        int ans = 0;
        for(int i=1;i<n;i++){
            if(currAnd == andValues[j]){
                j++;
                ans+=nums[i];
            } else {
                currAnd&=nums[i];
            }

        }
        return j==andValues.size() ? ans:-1;
    }

    int minSum(vector<int>& nums, vector<int>& andValues) {
        int n = nums.size();
        int m = andValues.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n + 1, 0);
        dp[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            dp[i] = dp[i - 1] & nums[i];
        }
        int sum = 0;
        int j = 0;
        for (int i = 0; i < n; ++i) {
            if (dp[i] == andValues[j]) {
                sum += nums[i];
                ++j;
            }
            if (j == m) break;
        }
        return j == m ? sum : -1;
    }
};



int main(){
    Solution s;
    vector<int>arr1={1,4,3,3,2},andValues1={0,3,3,2};
    vector<int>arr2={2,3,5,7,7,7,5},andValues2={0,7,5};
    vector<int>arr3={1,2,3,4},andValues3={2};
    // cout<<s.minimumValueSum(arr1,andValues1)<<endl;
    // cout<<s.minimumValueSum(arr2,andValues2)<<endl;
    // cout<<s.minimumValueSum(arr3,andValues3)<<endl;

    cout<<s.minSum(arr1,andValues1)<<endl;
    cout<<s.minSum(arr2,andValues2)<<endl;
    cout<<s.minSum(arr3,andValues3)<<endl;
}