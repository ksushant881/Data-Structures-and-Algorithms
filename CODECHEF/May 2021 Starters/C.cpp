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

ll n,m,k;
cin>>n>>m>>k;
vector<ll>attemps(k);
for(ll i=0;i<k;i++){
    cin>>attemps[i];
    //cout<<attemps[i]<<" ";
}
//cout<<endl;
vector<bool>v(n+1,false);

int count=0;
set<ll>cheater;
for(ll i=0;i<k;i++){
    if(attemps[i]>n) continue;
    if(v[attemps[i]]==true){
        if(!cheater.count(attemps[i])){
        count++;
        cheater.insert(attemps[i]);
        }
    }
    else{
        v[attemps[i]]=true;
    }
}

cout<<count<<" ";
for(auto it:cheater){
    cout<<it<<" ";
}
cout<<"\n";



}
}