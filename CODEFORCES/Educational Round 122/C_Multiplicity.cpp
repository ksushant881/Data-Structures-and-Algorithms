#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n;
int arr[100005];
void solve(){
    cin>>n;
    f(i,n) cin>>arr[i];
    int cnt[1000005];
    for(int i=n-1;i>=0;i--){
        for(int j=1;j*j<=arr[i];j++){
            if(arr[i]%j == 0){
                int x1=j,p1=0;
                int x2=arr[i]/j,p2=0;
                p1=cnt[x1+1];
                p2=cnt[x2+1];
                cnt[x1]+=p1;
                if(x1!=x2) cnt[x2]+=p2;
                cnt[x1]++;
                if(x1!=x2) cnt[x2]++;
                cnt[x1]%=mod;
                cnt[x2]%=mod;

            }
        }
    }
    cout<<cnt[1]<<endl;
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}