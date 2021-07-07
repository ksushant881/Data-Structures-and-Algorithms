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
for(int i=0;i<n;i++){
cout.flush();
if(i==0) {
    cout<<i<<endl;
}
else cout<<(i^(i-1))<<endl;
cout.flush();
int r;
cin>>r;
if(r==1){
    break;
}
cout.flush();

}

}
}