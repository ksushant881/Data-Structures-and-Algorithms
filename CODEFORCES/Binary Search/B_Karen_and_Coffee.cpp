#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,k,q;
    cin>>n>>k>>q;

    vector<int>arr(3e5,0);
    f(i,n){
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b+1]--;
    }
    for(int i=1;i<3e5;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    vector<int>v(3e5,0);
    f(i,3e5){
        if(arr[i] >= k) v[i]=1;
    }
    for(int i=1;i<3e5;i++){
        v[i]=v[i]+v[i-1];
    }

    f(m,q){
        int a,b;
        cin>>a>>b;
        cout<<v[b]-v[a-1]<<endl;
    }
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}