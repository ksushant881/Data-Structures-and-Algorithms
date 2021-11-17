#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    f(i,n) cin>>arr[i];
    int q;
    cin>>q;
    sort(arr.begin(),arr.end());
    f(i,q){
        int m;
        cin>>m;
        int high=n-1,low=0;
        while(high>=low){
            int mid=(high-low)/2 + low;
            if(arr[mid] > m) high=mid-1;
            else low=mid+1;
        }
        cout<<low<<"\n";
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