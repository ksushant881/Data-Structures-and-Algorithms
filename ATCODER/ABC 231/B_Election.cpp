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
    map<string,int>mp;
    f(i,n){
        string s;
        cin>>s;
        mp[s]++;
    }
    int curr=0;
    string ans="";
    for(auto x:mp){
        if(x.second > curr){
            curr=x.second;
            ans=x.first;
        }
    }
    cout<<ans<<endl;
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}