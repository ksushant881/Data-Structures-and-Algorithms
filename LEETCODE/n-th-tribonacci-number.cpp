#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution1 {
public:
    int tribonacci(int n) {
        if(n == 1 or n == 0) return n;
        if(n==2) return 1;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};

class Solution2 {
public:
int dp[38];
  int fib1(int n){
      if(n==0)return dp[n]=0;
      if(n==1 or n==2)return dp[n]=1;
      
     if(dp[n]!=-1)return dp[n];

      return dp[n]=fib1(n-1)+fib1(n-2)+fib1(n-3);
    }

    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));
        return fib1(n);
    }
};

int main(){
    
}