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
ll a,b,k;
cin>>a>>b>>k;
ll curr=0;
ll x=0;
// while(x!=k){
//     if(x%2==0)curr+=a;
//     else curr-=b;
//     x++;
// }
// cout<<curr<<endl;
if(k%2==0){
    curr+=(k/2)*a;
    curr-=(k/2)*b;
}
else{
    curr+=(k/2+1)*a;
    curr-=(k/2)*b;
}
cout<<curr<<endl;

}
}