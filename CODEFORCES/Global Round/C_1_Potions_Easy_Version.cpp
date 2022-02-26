#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n;
int arr[2005];
int cache[2005][2005];
int dp(){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0) {cache[i][j]=0; continue;}
            else{
                if(cache[i-1][j-1]+arr[i]>=0) cache[i][j] = max(cache[i-1][j-1]+arr[i],cache[i-1][j]);
                else cache[i][j] = cache[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<cache[i][j]<<" ";
        }
        cout<<endl;
    }
    // int ans=0;
    // for(int i=1;i<=n;i++){
    //     ans = max(ans,cache[n][i]);
    // }
    // cout<<ans;
}

void solve(){
    cin>>n;
    // priority_queue<int,vector<int>,greater<int>>pq;
    // int sum=0,num=0;
    f(i,n){
        cin>>arr[i];
    //     pq.push(arr[i]);
    //     sum+=arr[i];
    //     num++;
    //     while(sum<0){
    //         sum-=pq.top();
    //         num--;
    //         pq.pop();
    //     }
    }
    // cout<<num;
    dp();
}

signed main(){
fastio
int tc=1;
memset(cache,-1,sizeof(cache));
// cin >> tc;
f(casess,tc){
   solve();
}
}