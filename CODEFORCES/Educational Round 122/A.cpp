#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int efficentModularExponentiation(int x,int n){
    if(x==0) return 0;
    int res=1;
    while(n>0){
        if(n&1) res = (res*x)%mod;
        n = n>>1;
        x = (x*x)%mod;
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int cnt1=0,cnt2=0;
    f(i,n){
        cin>>arr[i];
        arr[i]=log2(arr[i]);
        if(arr[i]%2==0) cnt2++;
		else cnt1++;
    }
    int k1 = efficentModularExponentiation(2,cnt2);
    int k2 = efficentModularExponentiation(2,cnt1-1);
    cout<<(k1*k2)%mod-1<<"\n";
    
}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}