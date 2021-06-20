#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll getAdd(ll n){
    int dMin=9;
    int dMax=0;
    while(n!=0){
        int c=n%10;
        dMin=min(dMin,c);
        dMax=max(dMax,c);
        n=n/10;
    }
    return dMin*dMax;
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n,k;
cin>>n>>k;
k--;
while(k--){
    ll x=getAdd(n);
    if(x==0) break;
    n=n+x;
}
cout<<n<<"\n";
}
}