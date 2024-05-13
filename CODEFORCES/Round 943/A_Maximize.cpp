#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int x;
    cin>>x;
    int k=-1;
    int ans=-1;
    for(int i=1;i<x;i++){
        int m = __gcd(x,i)+i;
        if(m>=k){
            k=m;
            ans=i;
        }
    }
    cout<<ans<<endl;
    
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}