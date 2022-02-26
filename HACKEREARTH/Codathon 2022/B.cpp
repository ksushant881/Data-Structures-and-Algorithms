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
    int g[n],b[n];
    f(i,n)cin>>b[i];
    f(i,n)cin>>g[i];
    int ans=0;
    int cen = (n%2==0)?(n/2 - 1):n/2;
    for(int i=0;i<n;i++){
        if(g[i]!=b[i]){
            ans++;
            for(int j=i;j<=cen;j++){
                swap(b[j],b[n-j-1]);
            }
            // for(auto x:b) cout<<x<<" ";
            // cout<<endl;
        }
    }
    for(int i=0;i<n;i++){
        if(g[i]!=b[i]){
            ans=-1;
            break;
        }
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