#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

ll n,m,k;
cin>>n>>m>>k;
if(m > (n*(n-1))/2 || m < n-1){ //not connected case
    cout<<"NO"<<endl;
    continue;
}
if(k<=1 && n==1){ // <0 diameter
    cout<<"NO"<<endl;
    continue;
}
if(k<=2 && n==2){ //only 1 possibilty case
    cout<<"NO"<<endl;
    continue;
}

if(n>=3 && (m < n*(n-1)/2 && k<=3 || n-1>m || m >= n*(n-1)/2 && k<=2)){
    cout<<"NO"<<endl;
    continue;
}
cout<<"YES"<<endl;
// if(m == (n*(n-1))/2 && k-1 > 1){ //complete graph case and diameter = 1
//     cout<<"YES"<<endl;
// }
// else{
//     if(n/2 < k-1){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }


}

}