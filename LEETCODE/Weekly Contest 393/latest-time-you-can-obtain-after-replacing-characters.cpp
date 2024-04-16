#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    string findLatestTime(string s) {
        if(s[0] == '?') {
            if(s[1] == '1' or s[1] == '0' or s[1] == '?') s[0]='1';
            else s[0]='0';
        }
        if(s[1] == '?') {
            if(s[0] == '1') s[1] = '1';
            else s[1] = '9';
        }
        if(s[3] =='?') s[3]='5';
        if(s[4] == '?') s[4]='9';
        return s;
    }
};

int main(){
    Solution s;
}