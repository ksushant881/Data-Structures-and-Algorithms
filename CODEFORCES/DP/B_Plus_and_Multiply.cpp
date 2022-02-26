#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int k=1;
    for(int i=0;i<60;i++){
        if((n-k)%b==0){
            cout<<"Yes\n";
            return;
        }
        k*=a;
        if(k>n) break;
    }
    cout<<"No\n";
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}