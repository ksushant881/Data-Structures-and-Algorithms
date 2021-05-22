#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n;
cin>>n;
vector<ll>id(n);
for(ll i=0;i<n;i++) cin>>id[i]; 
 
ll m;
cin>>m;
vector<ll>b(m);
map<ll,ll>mp;
for(ll i=0;i<m;i++){
     cin>>b[i]; 
}

sort(id.begin(),id.end());
int j=0;
int k=0;
for(int i=0;i<n;i++){
    if(id[i]==b[j]){

    }
}

}
}