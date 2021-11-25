#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    vector<int>dp(n,0);
    bool flag=false;
    for(int i=n-1;i>=0;i--){
        if(s1[i] < s2[i]) flag=true;
        if(s1[i] > s2[i]) flag=false;
        if(flag) dp[i]=1;
    }
    for(int i=n-1;i>=0;i--){
        if(dp[i]) cnt++;
    }

    cout<<cnt<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}