#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio

int n;
cin>>n;
int tc=1;
cin >> tc;
string s;
cin>>s;
vector<int>dp(n+1,0);
for(int i=0;i<n;i++){
    dp[i] = dp[i-1] + s[i] - 'a' + 1;
}

for(int casess=0;casess<tc;casess++){
    int l,r;
    cin>>l>>r;
    ll res=0;
    res = dp[r-1] - dp[l-1] + s[l-1] - 'a' + 1;
    cout<<res<<endl;

}
}