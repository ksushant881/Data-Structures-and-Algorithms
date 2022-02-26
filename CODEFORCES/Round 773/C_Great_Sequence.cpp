#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int n,x;

void solve(){
    cin>>n>>x;
    map<int,int>mp;
    vector<int>arr(n);
    f(i,n){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    
    int ans=0;
    sort(arr.begin(),arr.end());
    // for(auto v:arr)cout<<v<< " ";
    // cout<<endl;
    f(i,n){
        // for(auto v:mp){
        //     // cout<<v.ff<<" here "<<v.ss<<endl;
        // }
        if(mp.find(arr[i])==mp.end()) continue;
        if(mp.find(arr[i]*x)==mp.end()){
            ans++;
            mp[arr[i]]--;
            if(mp[arr[i]]==0)mp.erase(arr[i]);
        }
        else{
            mp[arr[i]]--;
            mp[arr[i]*x]--;
            if(mp[arr[i]*x]==0)mp.erase(arr[i]*x);
            if(mp[arr[i]]==0)mp.erase(arr[i]);
        }
        // cout<<endl;
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