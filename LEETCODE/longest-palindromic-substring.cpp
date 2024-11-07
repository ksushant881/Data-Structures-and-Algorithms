#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int dp[1001][1001];
    string longestPalindrome(string s) {
        memset(dp,-1,sizeof(dp));
        int n = s.length();
        int ans = 0;
        string res = "";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPal(s,i,j)){
                    int len = j-i+1;
                    if(len >= ans){
                        ans = len;
                        res = s.substr(i,len);
                    }
                }
            }
        }
        return res;
    }

    bool isPal(string &s, int i, int j) {
        if(i >= j) return true;

        if(dp[i][j] != -1) return dp[i][j];

        if(s[i] == s[j]) {
            return dp[i][j] = isPal(s,i+1,j-1);
        }
        return dp[i][j] = false;
    }
};

int main(){
    Solution s;
    cout<<s.longestPalindrome("babad")<<endl;
}