#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int F(int n){
    int ans=0;
    while(n){
        ans+=n;
        n/=10;
    }
    return ans;
}

void solve(){
    int l,r;
    cin>>l>>r;
    cout<<F(r)-F(l)<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}