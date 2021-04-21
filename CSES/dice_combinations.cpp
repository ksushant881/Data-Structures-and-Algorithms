#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define endl "\n"
#define mod 1000000007
 
vector<vector<int>>res;
int help(ll target,vector<int>v,int i){
    if(target < 0 || i < 0)
        return 0;
    if(target == 0)
        return 1;
    
    return help(target-v[i],v,i) + help(target-v[i],v,i-1) + help(target,v,i-1);
}

int solve(ll target){
    if(target == 0)
        return 1;
    if(target < 0)
        return 0;
    else{
        return solve(target-1)+solve(target-2)+solve(target-3)+solve(target-4)+solve(target-5)+solve(target-6);
    }
}

int solve2(int n){
    vector<int>dp(n+1,0);
    dp[1]=1;
    for(int i=2;i<=n;i++){
        ll res=0;
        if(i>=1) res=(res%mod+dp[i-1]%mod)%mod;
        if(i>=2) res=(res%mod+dp[i-2]%mod)%mod;
        if(i>=3) res=(res%mod+dp[i-3]%mod)%mod;
        if(i>=4) res=(res%mod+dp[i-4]%mod)%mod;
        if(i>=5) res=(res%mod+dp[i-5]%mod)%mod;
        if(i>=6) res=(res%mod+dp[i-6]%mod)%mod;
        if(i<=6) res=(res%mod+1%mod)%mod;
        dp[i] = res;
    }
    return dp[n];
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
ll n;
cin >> n;
// vector<int>v={1,2,3,4,5,6};
// vector<int>temp;
// cout<<help(n,v,5);
cout<<solve2(n);
return 0;
}

/*
3 
1 2
2 1
1 1 1
*/