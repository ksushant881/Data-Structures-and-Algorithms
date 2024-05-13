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
    vector<int>arr(n-1);
    f(i,n-1) cin>>arr[i];
    vector<int>ans(n);
    ans[0]=arr[0]+1;
    for(int i=1;i<n;i++){
        ans[i] = arr[i-1]+ans[i-1];
        while(i<n-1 and ans[i]<=arr[i]){
            ans[i]+=ans[i-1];
        }
    }
    f(i,n){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    // for(int i=1;i<=n-1;i++){
    //     // cout<<i<<" "<<arr[i]<<endl;
    //     if(ans[i]%ans[i-1]!=arr[i-1]){
    //         cout<<"hi "<<ans[i]<<" "<<ans[i-1]<<" "<<arr[i-1]<<endl;
    //     }
    // }
    
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}