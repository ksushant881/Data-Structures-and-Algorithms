#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int unsigned long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int len(int n){
    string s="";
    while(n){
        s+=to_string(n%2);
        n=n/2;
    }
    return s.length();
}

void solve(){
    int a,b;
    cin>>a>>b;
    int k1=len(a),k2=len(b);
    // cout<<k1<<" "<<k2<<endl;
    int ans=0;
    for(int i=k1;i<=k2;i++){
        int m=(1llu<<i)-1;
        for(int j=0;j<i-1;j++){
            int temp = m - (1llu<<j);
            if(temp >=a && temp<=b) ans++;
        }   
    }
    cout<<ans;
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}