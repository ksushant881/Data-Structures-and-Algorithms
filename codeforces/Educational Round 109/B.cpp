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
vector<ll>v(n);
for(ll i=0;i<n;i++) cin>>v[i];

ll count=0;
for(ll i=0;i<n;i++){
    if(v[i]==i+1) continue;
    else{
        ll j=i;
        while(v[j]!=i+1){
            j++;
        }
        if(i==0 && j==n-1) j=n-2;
        sort(v.begin()+i,v.begin()+j+1);
        count++;
    }
}
cout<<count<<"\n";
}
}