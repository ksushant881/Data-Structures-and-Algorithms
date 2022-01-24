#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fun(int n){
    return (n*(n+1))/2;
}

void solve(){
    int n;
    cin>>n;
    vector<int>k(n),h(n);
    f(i,n) cin>>k[i];
    f(i,n) cin>>h[i];
    vector<pair<int,int>>arr;
    f(i,n){
        int right = k[i];
        int left = right - h[i] + 1;
        arr.push_back({left,right});
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    int currRight = 0,currLeft=1;
    for(auto x:arr){
        if(x.first > currRight){
            ans+=fun(currRight - currLeft + 1);
            currLeft = x.first;
            currRight = x.second;
        }
        else{
            currRight = max(currRight,x.second);
        }
    }
    ans+=fun(currRight-currLeft+1);
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