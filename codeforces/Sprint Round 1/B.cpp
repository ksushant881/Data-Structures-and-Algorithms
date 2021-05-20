#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll n,m;
cin>>n>>m;
vector<ll>v(n);
vector<ll>inx(m);
for(ll i=0;i<n;i++) cin>>v[i];
for(ll i=0;i<m;i++) cin>>inx[i];


// for(int i=0;i<m;i++){
//     ll j=inx[i]-1;
//     set<ll>st;
//     for(ll k=j;k<n;k++){
//         st.insert(v[k]);
//     }
//     cout<<st.size()<<"\n";
// }

set<ll>st;
st.insert(v[0]);
vector<ll>nos(n,1);
nos[0]=0;
for(ll i=1;i<n;i++){
    nos[i]=st.size();
    st.insert(v[i]);
}

for(int i=0;i<m;i++){
    cout<<nos[n-1]-nos[inx[i]-1]<<"\n";
}

}