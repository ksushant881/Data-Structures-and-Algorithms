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
ll y=n%2020;
ll x=(n-y)/2020 - y;
if(x>=0 && (2020*x+2021*y)==n)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
 
 
}
}