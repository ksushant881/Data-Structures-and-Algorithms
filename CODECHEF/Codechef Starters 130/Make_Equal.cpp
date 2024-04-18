#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    vector<int>arr;
    cin>>n;
    int mn = INT_MAX;
    f(i,n){
        int k;
        cin>>k;
        arr.push_back(k);
        mn=min(mn,k);
    }
    if(arr[0]!=mn or arr[n-1]!=mn){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}