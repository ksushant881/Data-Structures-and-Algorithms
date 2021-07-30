#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    int findIntegers(int n) {
        /*
            6 110
            7 111
            11 1011
            12 1100
            13 1101
            14 1110
            15 1111
            16 10000
            19 10011
            dp[1]=2
            dp[2]=3
            dp[3]=3
            dp[4]=4
            dp[5]=5
        */
        vector<int>dp(n+1,0);
        dp[1]=2;
        dp[2]=3;
        dp[3]=3;
        dp[4]=4;
        dp[5]=5;
        for(int i=6;i<=n;i++){
            if()
        }
    }
};

int main(){
    Solution s;
    cout<<s.findIntegers(5)<<endl;
    cout<<s.findIntegers(1)<<endl;
    cout<<s.findIntegers(2)<<endl;
    cout<<s.findIntegers(50000)<<endl;

}