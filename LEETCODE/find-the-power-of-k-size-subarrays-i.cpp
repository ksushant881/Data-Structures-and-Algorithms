#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define f(i, n) for (int i = 0; i < n; i++)

class Solution1
{
public:
    vector<int> resultsArray(vector<int> &nums, int k)
    {
        vector<int> ans;
        int n = nums.size();
        int mx = nums[0];

        for (int i = 1; i < k; i++)
        {
            if (nums[i - 1] + 1 != nums[i])
            {
                ans.push_back(-1);
                break;
            }
            mx = (mx, nums[i]);
        }

        if (ans.size() == 0)
        {
            ans.push_back(mx);
        }

        int left = 1, right = k;
        while (right < n)
        {

            if (help(nums, left, right))
            {
                ans.push_back(nums[right]);
            }
            else
            {
                ans.push_back(-1);
            }

            right++;
            left++;
        }
        return ans;
    }

    bool help(vector<int> &nums, int start, int end)
    {
        for (int i = start + 1; i <= end; i++)
        {
            if (nums[i] != nums[i - 1] + 1)
            {
                return false;
            }
        }
        return true;
    }
};

class Solution2
{
public:
    vector<int> resultsArray(vector<int> &nums, int k)
    {
        vector<int> ans;
        int n = nums.size(), cons = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || nums[i] == nums[i - 1] + 1)
            {
                cons++;
            }
            else
            {
                cons = 1;
            }
            if (i + 1 >= k)
            {
                ans.push_back(cons >= k ? nums[i] : -1);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 3, 2, 5};
    Solution1 s1;
    Solution2 s2;
    vector<int> ans1 = s1.resultsArray(arr, 3);
    for (auto x : ans1)
    {
        cout << x << " ";
    }
    cout << endl;
    vector<int> ans2 = s2.resultsArray(arr, 3);
    for (auto x : ans2)
    {
        cout << x << " ";
    }
}