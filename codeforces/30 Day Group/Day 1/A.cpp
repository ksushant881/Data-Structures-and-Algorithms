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
cin >> n;
vector<ll>v;
for(ll i=2;i*i<=n;i++){
    if(n%i==0){
        v.push_back(i);
        v.push_back(n/i);
    }
}
if(v.size()==0){
    cout<<"1 "<<n-1<<endl;
    continue;
}
sort(v.begin(),v.end());
cout<<v.back()<<" "<<n-v.back()<<endl;

}
}