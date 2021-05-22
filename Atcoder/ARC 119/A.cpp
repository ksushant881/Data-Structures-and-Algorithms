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

    ll res=(1LL<<60);
    ll a,b,c;
    for(int i=0;i<60;i++){
        //cout<<a<<b<<c<<endl;
        b=i;
        a=n/(1LL<<i);
        c=n-(a*(1LL<<i));
        
        res=min(res,a+b+c);

    }
    cout<<res<<endl;
    return 0;
}