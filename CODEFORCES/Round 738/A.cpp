#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int invertBits(int n){
//     int x = log2(n) ;
//     int m = 1 << x;
//     m = m | m - 1;
//     n = n ^ m;
//     return n;
// }

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
vector<ll>v(n);
ll ans=INT_MAX;
int res=-1;
for(int i=0;i<n;i++) {
    cin>>v[i];
    ans=min(ans,v[i]);
    if(res==-1) res=v[i];
    else res=res&v[i];
}
// bool flag=false;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if((v[i]&v[j])==0){//101 010
//             cout<<0<<endl;
//             flag=true;
//             break;
//         }
//     }
//     if(flag==true) break;
// }
// if(flag==true) continue;
// cout<<ans<<endl;
cout<<res<<endl;
}

}