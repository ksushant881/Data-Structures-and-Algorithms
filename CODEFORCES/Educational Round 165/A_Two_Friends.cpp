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
    map<int,int>mp;
    set<int>st;
    f(i,n) {
        int x;
        cin>>x;
        st.insert(x);
        mp[i+1]=x;
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(st.find(i)!=st.end() and st.find(mp[i])!=st.end()){
            cout<<2<<endl;
            return;
        }
    }
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}