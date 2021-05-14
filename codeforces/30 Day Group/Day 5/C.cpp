#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll n;
cin>>n;
vector<ll>a(n);
set<ll>st;
for(ll i=0;i<n;i++){
    cin>>a[i];
    st.insert(a[i]);
}
vector<ll>q;
q={st.begin(),st.end()};
//cout<<q[0]<<" "<<q[1]<<" "<<q[2]<<endl;
//sort(q.begin(),q.end());

for(ll i=0;i<q.size()-1;i++){
    ll x=2*q[i];
    for(ll j=i+1;j<q.size();j++){
        if(x > q[j]){
            cout<<"YES"<<"\n";
            return 0;
        }
    }
}
cout<<"NO"<<"\n";
}