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
int n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<ll>even;
vector<ll>odd;
for(int i=0;i<n;i++){
    if(v[i]%2!=0){
        odd.push_back(v[i]);
    }
    else{
        even.push_back(v[i]);
    }
}
int res=0;
vector<ll>vv;
for(int i=0;i<even.size();i++){
vv.push_back(even[i]);
}
for(int i=0;i<odd.size();i++){
    vv.push_back(odd[i]);
}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(__gcd(vv[i],2*vv[j])>1) res++;
    }
}

cout<<res<<endl;
}
}