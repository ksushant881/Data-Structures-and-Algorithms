#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int maxSumIS(int arr[], int n) { 
    int dp[n+1][n+1];
    for(int i=0;i<n+1;i++){
        dp[i][0]=0;
        dp[0][i]=0;
        dp[i][i]=1;
    }
    for(int i=1;i<n+1;i++){
        ll sum=0;
        for(int j=1;j<n+1;j++){
            //if(i==j) continue;
            sum+=arr[j-1];
            if(sum%j == 0) count++;
        }
    }
} 

int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<subCount(arr,n,)
}
}