#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void help(int n,int k,int sum,int &cnt,vector<int>v,vector<vector<int>>&res){
    if(sum>n) return;
    if(sum==n){
        cnt++;
        res.push_back(v);
        return;
    }
    for(int i=1;i<=k;i++){
        v.push_back(i);
        help(n,k,sum+i,cnt,v,res);
        v.pop_back();
    }
}

void solve(){
    int n,k;
    // cin>>n>>k;
    n=6,k=6;
    int ans=0;
    vector<vector<int>>res;
    for(int i=1;i<=k;i++){
        vector<int>v;
        v.push_back(i);
        help(n,k,i,ans,v,res);
    }
    cout<<ans<<endl;
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}



int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}