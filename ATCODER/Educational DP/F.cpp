#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
//dp solution using pair keeping length ans and string ans together
string solve(string a,string b,int n1,int n2){
    vector<vector<pair<ll,string>>>dp(n1+1,vector<pair<ll,string>>(n2+1));
    for(int i=0;i<=n1;i++) dp[i][0]={0,""};
    for(int i=0;i<=n2;i++) dp[0][i]={0,""};
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j].first = dp[i-1][j-1].first + 1;
                dp[i][j].second = dp[i-1][j-1].second + b[j-1];
                cout<<dp[i][j].second<<endl;
            }
            else{
                if(dp[i-1][j].first > dp[i][j-1].first){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
    }
    return dp[n1][n2].second;
}

//trivial solution to get length first and one more traversal to get string
string solve2(string a,string b,int n1,int n2){
    vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            if(i==0 || j==0) continue;
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int i=n1;
    int j=n2;
    string res;
    //going bottom up
    while(1){
        if(i==0 || j==0) break;
        if(a[i-1]==b[j-1]){
            res+=a[i-1];
            i--;
            j--;
        }
        else{
            if(dp[i-1][j] >= dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

    string a,b;
    cin>>a>>b;
    int n1=a.length();
    int n2=b.length();

    cout<<solve2(a,b,n1,n2);

}
}