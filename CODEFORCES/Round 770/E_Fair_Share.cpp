#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int m;
    cin>>m;
    map<int,queue<pair<int,int>>mp;
    int k=0;
    for(int j=0;j<m;j++){
        int n;
        cin>>n;
        k+=n;
        f(i,n){
            int x;
            cin>>x;
            mp[x].push({j,i});
        }
    }
    if(k%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    for(auto x:mp){
        if(x.second%2!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}