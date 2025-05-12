#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,m;
    cin>>n>>m;
    vector<priority_queue<int, vector<int>, greater<int>>>arr(n+1);
    for(int i=1;i<=n;i++){
        set<int>st;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            bool flag=false;
            for(int i)
            st.insert(x);
            arr[i].push(x);
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