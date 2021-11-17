#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>cities(n),tower(k);
    int mx1=INT_MIN,mn1=INT_MAX,mx2=INT_MIN,mn2=INT_MAX;
    f(i,n) {
        cin>>cities[i];
        mx1=max(mx1,cities[i]);
        mn1=min(mn1,cities[i]);
    }
    f(i,k) {
        cin>>tower[i];
        mx2=max(mx2,tower[i]);
        mn2=min(mn2,tower[i]);
    }
    int high=max(mx1-mn2,mx2-mn1);
    int low=0;
    int ans=INT_MAX;
    while(high>=low){
        int mid=(high-low)/2+low;
        int i;
        for(i=0;i<n;i++){
            int j=0;
            bool flag=false;
            for(j=0;j<k;j++){
                if(tower[j]-mid <= cities[i] && tower[j]+mid >= cities[i]) {
                    flag=true;
                    break;
                }
                else continue;
            }
            if(!flag){
                low=mid+1;
                break;
            }
            
        }
        if(i==n){
            high=mid-1;
            ans=min(ans,mid);
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