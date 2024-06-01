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
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<>());
    vector<int>ans(n+1);
    int j=0;
    int i=1;
    for(i=1;i<=n;i++){
        ans[i] = arr[j];
        j++;
        i++;
    }
    for(i=2;i<=n;i++){
        ans[i]=-1*arr[j];
        j++;
        i++;
    }
    int res = 0;
    for(int k=1;k<=n;k++){
        // cout<<ans[k]<<" ";
        res+=ans[k];
    }
    // cout<<endl;
    cout<<res<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}