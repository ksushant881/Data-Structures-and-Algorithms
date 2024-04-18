#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    vector<ll>arr;
    cin>>n;
    f(i,n){
        int k;
        cin>>k;
        arr.push_back(k);
    }

    ll curr = arr[0], ans = 0, sum = arr[0];
    for(int i=1;i<n;i++){
        sum+=arr[i];
        ans=min(ans,curr+arr[i]);
        curr=min(curr+arr[i], arr[i]);
    }
    ans=abs(ans);
    cout<<sum+2*ans<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}