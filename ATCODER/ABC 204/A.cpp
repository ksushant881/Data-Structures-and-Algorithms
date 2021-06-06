#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int x,y;
cin>>x>>y;
if(x==y) cout<<x;
else{
    if((x==0 && y==1) || (x==1 && y==0)) cout<<2;
    if((x==1 && y==2) || (x==2 && y==1)) cout<<0;
    if((x==0 && y==2) || (x==2 && y==0)) cout<<1;
}
}
}