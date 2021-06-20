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
ll a,b,m,n;
cin >> a>> b >> n >> m;
if(a+b<m+n){
cout<<"No"<<endl;
continue;
}
if(min(a,b)>=m){
    cout<<"Yes"<<endl;
    continue;
}
else{
    cout<<"No"<<endl;
    continue;
}
}
}