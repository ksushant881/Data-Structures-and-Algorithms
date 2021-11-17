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
    int ans=INT_MAX;
    for(int i=1;i<=sqrt(n);i++){
        ans=min(ans,i-1+(n-1)/i);
    }
    cout<<ans<<"\n";
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}