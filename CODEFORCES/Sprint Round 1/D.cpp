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
vector<vector<ll>>height(2,vector<ll>(n));
for(int i=0;i<2;i++) {
    for(int j=0;j<n;j++){
        cin>>height[i][j];
    }
}


int dp[2][n];
dp[0][0]=height[0][0];
dp[1][0]=height[1][0];

for(int i=1;i<n;i++){
    for(int j=0;j<2;j++){
        dp[j][i]
    }
}

}