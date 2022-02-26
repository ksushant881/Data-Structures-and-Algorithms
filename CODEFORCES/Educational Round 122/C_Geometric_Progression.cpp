#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n,k;
const int maxn=200002;
int arr[maxn];

int dp(){
    map<int,int>front,back;
    f(i,n) {
        cin>>arr[i];
        front[arr[i]]++;
    }
    int ans=0;
    f(i,n){
        front[arr[i]]--;
        if(front[arr[i]]==0) front.erase(arr[i]);
        if(arr[i]%k==0){
            if(front.count(arr[i]*k) and back.count(arr[i]/k)){
                ans += (front[arr[i]*k] * back[arr[i]/k]);
            }
        }
        back[arr[i]]++;
    }
    cout<<ans;
}

void solve(){
    cin>>n>>k;
    dp();
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}