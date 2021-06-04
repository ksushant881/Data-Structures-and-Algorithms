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
int n,k1,k2;
int w,b;
cin>>n>>k1>>k2>>w>>b;
if(2*w <= k1+k2 && 2*b <= 2*n-k1-k2) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}