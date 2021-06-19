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
ll n;
cin>>n;
int ans1= ((-1)+sqrt(1+(8*n)))/2;
int ans2= ((-1)-sqrt(1+(8*n)))/2;
if(((-1)+sqrt(1+(8*n)))/2 > ans1) ans1++;
cout<<ans1;
 
 
}
}