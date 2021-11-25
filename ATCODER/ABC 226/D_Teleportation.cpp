#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define int long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)


void solve(){
    int n;
    cin>>n;

    vector<vector<int>>v(n,vector<int>(2));
    f(i,n){
        cin>>v[i][0]>>v[i][1];
    }
    set<pair<int,int>>st;
    for(int i=0;i<n-1;i++){
        int x=v[i][0];
        int y=v[i][1];
        for(int j=i+1;j<n;j++){
            st.insert({v[j][0]-x,v[j][1]-y});
            st.insert({-v[j][0]+x,-v[j][1]+y});
        }
    }
    for(auto x:st){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<st.size();
}

signed main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}