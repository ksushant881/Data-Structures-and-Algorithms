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
    vector<int>odd,even;
    f(i,n){
        int x;
        cin>>x;
        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }
    for(auto x: odd) cout<<x<<" ";
    for(auto x: even) cout<<x<<" ";
    cout<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}