#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    f(i,n){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    while(q--){
        int x;
        cin>>x;
        int high=n-1,low=0;
        auto it=lower_bound(arr.begin(),arr.end(),x);
        int k = arr.end() - it;
        
        cout<<k<<endl;
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