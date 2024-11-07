#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    vector<int>arr(16);
    f(i,16) cin>>arr[i];
    sort(arr.begin(),arr.end());
    map<int,int>mp;
    f(i,16){
        mp[arr[i]] = 16-i-1;
    }
    vector<int>ans(16);
    f(i,16){
        ans[i] = 
    }

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}