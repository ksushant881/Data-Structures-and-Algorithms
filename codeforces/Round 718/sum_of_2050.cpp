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
if(n%2050 != 0){
cout<<"-1"<<endl;
continue;
}
ll q;
ll res = 0;
ll num=2050;
while(n/num!=0){
    q=n/num;
    res+=(q%10);
    num = num*10;
}
cout<<res<<endl;
 
 
}
}