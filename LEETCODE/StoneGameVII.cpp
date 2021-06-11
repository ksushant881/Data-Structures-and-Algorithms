#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rec(vector<int>& stones,vector<vector<int>>&dp, int start, int end, int sum) {
        if (start == end)
            return 0;

        if (dp[start][end])
            return dp[start][end];

        int remove_first = sum - stones[start] - rec(stones, dp,start+1, end, sum-stones[start]);
        int remove_last = sum - stones[end] - rec(stones, dp,start, end-1, sum-stones[end]);

        dp[start][end] = max(remove_first, remove_last);
        return dp[start][end];
    }
    int stoneGameVII(vector<int>& stones) {
        int n=stones.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int sum = 0;
        for(int i=0;i<n;i++) sum+=stones[i];
        return rec(stones,dp, 0, n-1, sum);
    }
};

int main(){

vector<int>v={792,195,697,271,743,51,836,322,135,550,399,182,988,25,395,254,480,931,513,772,798,102,110,915,794,330,597,220,789,462};
Solution s;
cout<<s.stoneGameVII(v);

}