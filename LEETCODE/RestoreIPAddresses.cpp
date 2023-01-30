#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    bool isValid(string str) {
        if (str[0] == '0') return false;
        return stoi(str) <= 255;
    }
    void solve(string &str, int index, string ans, vector<string> &result, int count) {
        if (index >= str.length() || count == 4) {
            if (index >= str.length() && count == 4) {
                result.push_back(ans.substr(0, ans.length() - 1));
            }
            return;
        }

        solve(str, index + 1, ans + str[index] + ".", result, count + 1);

        if (index + 2 <= str.length() && isValid(str.substr(index, 2)))
            solve(str, index + 2, ans + str.substr(index, 2) + ".", result, count + 1);

        if (index + 3 <= str.length() && isValid(str.substr(index, 3)))
            solve(str, index + 3, ans + str.substr(index, 3) + ".", result, count + 1);
    }

    vector<string> restoreIpAddresses(string str) {
        vector<string> result;
        string ans;
        solve(str, 0, ans, result, 0);
        return result;
    }
};
public:
    void help(int par,string s,int inx,string res,vector<string>&ans) {
        if(par == 4 || inx >= s.length()) {
            if(par==4 and inx >= s.length()){
                ans.push_back(res);
            }
            return;
        }
        help(par+1,s,inx+1,res+s[inx]+".",ans);
        if(inx+2<=s.length() && isValid(s.substr(inx,inx+2))){
            help(par+2,s,inx+2,res+s.substr(inx,inx+2)+".",ans);
        }
        if(inx+3<=s.length() && isValid(s.substr(inx,inx+3))){
            help(par+3,s,inx+3,res+s.substr(inx,inx+3)+".",ans);
        }
    }

    bool isValid(string s){
        if(s[0]=='0') return false;
        int k = stoi(s);
        return k<=255;
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        help(0,s,0,"",ans);
        return ans;
    }
};

int main(){
    Solution s;
    s.restoreIpAddresses("25525511135");
}