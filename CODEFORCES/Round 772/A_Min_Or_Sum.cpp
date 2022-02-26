#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    int n;
    cin>>n;
    int arr[n];
    f(i,n) cin>>arr[i];
    vector<int>v(32,0);
    f(i,n){
        f(j,32){
            if((arr[i]&(1<<j))) v[j]++;
        }
    // for(auto x:v) cout<<x<<" ";
    // cout<<endl;
    
    }
    int ans=0;
    
    f(i,32){
        if(v[i]) ans+=(1<<i);
    }
    cout<<ans<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}