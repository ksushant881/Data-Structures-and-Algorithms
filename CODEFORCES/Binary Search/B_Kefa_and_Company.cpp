#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,d;
    cin>>n>>d;
    vector<pair<int,int>>v(n);
    f(i,n){
        int x,y;
        cin>>x>>y;
        v[i].first=x;
        v[i].second=y;
    }
    sort(v.begin(),v.end());
    int pre[n+1];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+v[i-1].second;
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int base=v[i].first;
        int high=n-1,low=i; 
        while(high>=low){
            int mid = (high-low)/2 + low;
            if(v[mid].first < base+d){
                low=mid+1;
                ans = max(ans,pre[mid+1]-pre[i]);
            }
            else{
                high=mid-1;
            }
        }
    }
    cout<<ans<<endl;
 
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}