#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int dp[31][1001];
    int solve(int n,int k,int target,int dice,int sum){
        if(dice == n and sum != target) return 0;
        if(dice == n and sum == target) return 1;
        
        if(dp[dice][sum]!=-1) return dp[dice][sum];
        
        long total = 0;
        
        for(int i=1;i<=k;i++){
            total = (total + solve(n,k,target,dice+1,sum+i))%mod;
        }
        
        dp[dice][sum]=total%mod;
        return dp[dice][sum];
    }
    
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        solve(n,k,target,0,0);
        return dp[0][0];
    }
};

int main(){
    
}