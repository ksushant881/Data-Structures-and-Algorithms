#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int dp[100005][150];
    
    int solve(string &s,int i,int prevChar,int k){
        if(i==s.length()){
            return 0;
        }
        
        if(dp[i][prevChar]!=-1) return dp[i][prevChar];
        
        int notInclude = solve(s,i+1,prevChar,k);
        int include = 0;
        if(prevChar==0 or abs(prevChar - s[i]) <= k){
            include = 1 + solve(s,i+1,s[i],k);
        }
        return dp[i][prevChar] = max(include, notInclude);
    }
    
    int longestIdealString(string s, int k) {
        memset(dp, -1, sizeof(dp));
        return solve(s,0,0,k);
    }
};

int main(){
    Solution s;
    cout<<s.longestIdealString("acfgbd",2)<<endl;
    s = *new Solution();
    cout<<s.longestIdealString("abcd",3)<<endl;
    s = *new Solution();
    cout<<s.longestIdealString("dyyonfvzsretqxucmavxegvlnnjubqnwrhwikmnnrpzdovjxqdsatwzpdjdsneyqvtvorlwbkb",7)<<endl;
    s = *new Solution();
    cout<<s.longestIdealString("eduktdb", 15)<<endl;
}