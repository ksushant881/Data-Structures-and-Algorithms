#include<bits/stdc++.h>
using namespace std;

int cuts(int n,int a,int b,int c){
    if(n < 0)
        return -1;
    if(n == 0)
        return 0;
    
    int res = max({cuts(n-a,a,b,c),cuts(n-b,a,b,c),cuts(n-c,a,b,c)});
    if(res == -1)
        return -1;
    else
        return res+1;
}

//dp solution
int cuts2(int n,int a,int b,int c){
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=-1;
        if(i-a >=0)
            dp[i]=max(dp[i],dp[i-a]);
        if(i-b >=0)
            dp[i]=max(dp[i],dp[i-b]);
        if(i-c >= 0)
            dp[i]=max(dp[i-c],dp[i]);
        if(dp[i] != -1)
            dp[i]++;
    }
    return dp[n];
}

int main(){
    cout<<cuts2(5,1,2,3);
    cout<<endl<<cuts2(23,12,11,13);
}


// 5 1 2 3
//