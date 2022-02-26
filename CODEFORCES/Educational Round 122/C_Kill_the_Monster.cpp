#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool ok(int hc,int dc,int hm,int dm){
    int a=(hc+dm-1)/dm;
    int b=(hm+dc-1)/dc;
    return a>=b;
}

void solve(){
    int hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    for(int i=0;i<=k;i++){
        int m1=i,m2=k-i;
        int hcc=hc+m1*a,dcc=dc+m2*w;
        if(ok(hcc,dcc,hm,dm)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}