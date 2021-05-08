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
ll n,k;
cin>>n>>k;

ll res=n;
ll i;
for(i=1;i*i<=n;i++){
    if(n%i==0){
        if(i<=k)
            res=min(res,n/i);
        if(n/i<=k)
            res=min(res,i);
    }
}
cout<<res<<endl;


 
 
}
}