#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    string s;
    cin>>s;
    map<int,char>mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=s[i];
        } else {
            char k =mp[arr[i]];
            if(k!=s[i]){
                // for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}