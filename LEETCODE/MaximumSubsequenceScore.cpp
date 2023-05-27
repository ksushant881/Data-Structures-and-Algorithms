#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define mod 1000000007
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define f(i, n) for (int i = 0; i < n; i++)

class Solution
{
public:
#define ll long long int
    vector<int> arr1, arr2;
    ll m;
    ll n;
    ll dp[100001];
    long long maxScore(vector<int> &nums1, vector<int> &nums2, int k)
    {
        n = nums1.size();
        arr1 = nums1;
        arr2 = nums2;
        m = k;
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0, INT_MAX);
        // return dp[0];
    }

    ll solve(ll i, ll nos, ll sum, int currMin)
    {
        if (nos == m)
            return sum * currMin;
        if (i >= n)
            return INT_MIN;
        // if (dp[i] != -1)
        //     return dp[i];
        ll res = INT_MIN;
        ll currElementTaken = solve(i + 1, nos + 1, sum + arr1[i], min(currMin, arr2[i])); // take current element
        ll currElementNotTaken = solve(i + 1, nos, sum, currMin);                          // do not take current element
        res = max({res, currElementTaken, currElementNotTaken});
        // dp[i] = res;
        return res;
    }
};

int main()
{
    vector<int> arr1 = {4, 2, 3, 1, 1};
    vector<int> arr2 = {7, 5, 10, 9, 6};
    int k = 1;
    Solution s;
    cout << s.maxScore(arr1, arr2, k);
}