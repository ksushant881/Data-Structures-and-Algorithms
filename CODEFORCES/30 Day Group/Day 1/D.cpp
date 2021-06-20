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
ll n,x,m;
cin>>n>>x>>m;
ll count=0;
ll lprev=-1,rprev=-1;
for(int i=0;i<m;i++){
    ll l,r;
    cin>>l>>r;
    
    if((lprev==-1 && rprev==-1) && (x>=l && x<=r)){
        count+=(r-l+1);
        lprev=l;
        rprev=r;
    }

    if((r>=lprev && l<=lprev) || (l<=rprev && r>=rprev)){
        
    lprev=min(lprev,l);
    rprev=max(rprev,r);
    }


}
cout<<rprev-lprev+1<<endl;
}
}