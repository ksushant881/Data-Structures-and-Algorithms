#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    bool ans=false;
    f(i,n) {
        cin>>arr[i];
        if(arr[i]==1) ans=true;
    }
    string res = ans?"YES":"NO";
    cout<<res<<endl;

}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}