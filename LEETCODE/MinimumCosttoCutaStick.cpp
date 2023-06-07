#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
int m;
    int minCost(int n, vector<int>& cuts) {
        m = n;
        int k = cuts.size();
        sort(cuts.begin(),cuts.end());
        vector<bool>done(k, false);
        int ans = INT_MAX;
        dp(0,done,cuts, n, ans, 0, k-1);
        return ans;
    }

    pair<int,int> getLength(vector<bool>&done, vector<int>&cuts, int curr) {
        int j = curr-1;
        pair<int,int>p;
        while(j>0 and !done[j]){
            j--;
        }
        if(j == -1) p.first = cuts[curr];
        else p.first = cuts[curr] - cuts[j];

        j=curr+1;
        while(j<cuts.size() and !done[j]){
            j++;
        }
        if(j == cuts.size()) p.second = m - cuts[curr];
        else p.second = cuts[j] - cuts[curr];

        return p;
    }

    int dp(int cost, vector<bool>&done, vector<int>&cuts, int len, int &ans, int low, int high) {
        // if(len == 0) return 0;
        // cout<<low<<" "<<high<<" "<<cuts.size()-1<<endl;
        if(low > high or low < 0 or high > cuts.size()-1 or low > cuts.size()-1 or high < 0) return cost;

        for(int i=low;i<=high;i++) {
            
            if(!done[i]){
                done[i] = true;

                pair<int,int> p = getLength(done, cuts, i);
                ans = min(ans, dp(cost+len, done, cuts, p.first, ans, low, i-1) + dp(cost+len, done, cuts, p.second, ans, i+1, high));

                bool log = true;
                for(int a=0;a<cuts.size();a++) { log &= done[a];}
                if(log) cout<<"ANS -----> "<<ans<<endl;

                done[i] = false;
            }
        }
        // cout<<cost<<endl;
        return cost;
    }

};

int main(){
    Solution s;
    int n1 = 7;
    vector<int>arr1={1,3,4,5};
    int n2 = 9;
    vector<int>arr2={5,6,1,4,2};
    cout<<s.minCost(n1, arr1)<<endl;
    // cout<<s.minCost(n2, arr2)<<endl;
}