#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    f(i,n) cin>>v[i];
    sort(v.begin(),v.end());
    int ans=0,inx=n-1,c=n-1-k;
    while(k--){
        ans+=v[c]/v[inx];
        inx--;
        c--;
    }
    for(int i=c;i>=0;i--) ans+=v[i];
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