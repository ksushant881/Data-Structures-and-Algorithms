#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,m;
    cin>>n>>m;
    ll tot=n*m;
    int ans=0;
    if(tot%3!=1){
        ans+=(tot/3);
        tot=tot%3;
        if(tot==0){
            cout<<ans<<endl;
            return;
        }
        ans+=(tot/2);
        cout<<ans<<endl;
    }
    else{
        ans+=(tot/3)-1;
        tot=tot%3 + 3;
        ans+=tot/2;
        cout<<ans<<endl;
    }
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}