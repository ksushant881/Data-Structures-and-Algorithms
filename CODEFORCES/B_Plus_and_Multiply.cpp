#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,d;
    map<string,int>mp;
    vector<string>v;
    for(int i=0;i<n;i++){
        char a,b;
        int x;
        cin>>a>>b>>x;
        v.push_back(to_string(a+b));
        mp[to_string(a+b)]=x;
    }
    int ans=0;
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
        string s=v[i];
        if(mp.find(s)!=mp.end()){
            
        }
    }

    

}

signed main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}