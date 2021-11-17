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
    vector<string>v(n);
    f(i,n) cin>>v[i];
    set<string>st;
    for(int i=n-1;i>=0;i--){
        if(st.count(v[i])==0){
            cout<<v[i]<<"\n";
        }
        st.insert(v[i]);
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