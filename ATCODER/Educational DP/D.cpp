#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


//recursive solution
//top down recursion
void rec(vector<pair<ll,ll>>&v,int i,ll currentWeight,ll currentValue,ll limit,ll n,ll &res){
    if(i>=n && currentWeight <=limit){
        res = max(res,currentValue);
        return;
    }
    if(currentWeight > limit) {
        return;
    }
    rec(v,i+1,currentWeight+v[i].first,currentValue+v[i].second,limit,n,res);
    rec(v,i+1,currentWeight,currentValue,limit,n,res);
}

//recursive solution
//bottom up recursion
//avoiding a parameter size of array to be passed in arguments of recursive function
ll rec2(vector<pair<ll,ll>>&v,int i,ll currentWeight,ll currentValue,ll limit){
    if(i<0 && currentWeight <= limit) return currentValue;
    if(currentWeight > limit) return INT_MIN;
    return max(rec2(v,i-1,currentWeight+v[i].first,currentValue+v[i].second,limit),rec2(v,i-1,currentWeight,currentValue,limit));
}

//dp solution
ll solve(vector<pair<ll,ll>>&v,ll limit){
    int n=v.size();
    vector<vector<ll>>dp(n+1,vector<ll>(limit+1));
    //dp[i][j] = maximum value that we can get with first i items and j being the max capacity of knapsack
    for(int i=0;i<limit+1;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=limit;j++){
            if(v[i-1].first > j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(v[i-1].second + dp[i-1][j-v[i-1].first] , dp[i-1][j]);
            }
        }
    }
    return dp[n][limit];

}

int main(){
fastio
 
int tc=1;
for(int casess=0;casess<tc;casess++){
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v[i]={a,b};
    }
    //ll res=0;
    // rec(v,0,0,0,w,n,res);
    // cout<<res;
    //cout<<rec2(v,n-1,0,0,w);
    cout<<solve(v,w);
    
}
}