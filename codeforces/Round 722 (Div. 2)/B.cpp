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
vector<ll>pos;
int lastPos=-1;
vector<ll>neg;
int zer=0;
ll minNeg=1;
ll maxNeg=INT32_MIN;
for(int i=0;i<n;i++){
    if(v[i]==0){
        zer++;
    }
    if(v[i]<0){
        neg.push_back(v[i]);
        minNeg = min(v[i],minNeg);
        maxNeg = max(v[i],maxNeg);
    }
    if(v[i]>0){
        pos.push_back(v[i]);
    }
}
ll res;
ll diff=INT32_MAX;
sort(neg.begin(),neg.end());
if(neg.size()>2){
for(ll i=0;i<neg.size()-1;i++){
    diff=min(diff,abs(neg[i+1]-neg[i]));
}
}
// for(ll i=0;i<neg.size();i++){
//     for(ll j=0;j<neg.size();j++){
//         if(i==j) continue;
//         diff=min(diff,abs(neg[i]-neg[j]));
//     }
// }

if(pos.size()==n){
    cout<<1<<"\n";
    continue;
}

if(zer==0){
    res=neg.size();
}
else{
    if(pos.size()!=0)
        res=neg.size()+1;
    else
        res=neg.size()+zer;
}

for(int i=0;i<pos.size();i++){
    if(pos[i]<=diff){
        res++;
        break;
    }
}
cout<<res<<"\n";

}
}