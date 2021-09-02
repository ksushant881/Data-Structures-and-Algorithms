#include<bits/stdc++.h>
using namespace std;

int numberOfBst(int n){
    vector<int>dp(n+1,0);
    if(n==1) return 1;
    if(n==2) return 2;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 5;
    for(int i=4;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i] += dp[j-1] * dp[i-j];
        }
    }
    for(auto x:dp){
        cout<<x<<" ";
    }
    cout<<endl;
    return dp[n];
} 

int main(){
    cout<<numberOfBst(6);
}