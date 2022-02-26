#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>arr;
    int ans=0;
    f(i,n) {
        int k;
        cin>>k;
        arr.push_back(k);
        ans+=k;
    }
    vector<int>cnt(n,1);
    bool flag=false;
    while(1){
        for(int i=0;i<n;i++){
            if(arr[i]%x==0){
                arr[i]=arr[i]/x;
                cnt[i]=cnt[i]*x;
                ans+=cnt[i]*arr[i];
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    cout<<ans<<endl;


}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}