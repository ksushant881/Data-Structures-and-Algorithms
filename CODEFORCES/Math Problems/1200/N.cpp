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
if(k>n){
    cout<<"NO"<<endl;
    continue;
}

if(n%2==0 && k%2==0){
    cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++){
        cout<<1<<" ";
    }
    cout<<n-(k-1)<<endl;
    continue;
}
//6 3
if(k*2<=n && n%2==0 && k%2!=0){
    cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++){
        cout<<2<<" ";
    }
    cout<<n-2*(k-1)<<endl;
    continue;
}

if(n%2!=0 && k%2==0){
    cout<<"NO"<<endl;
    continue;
}

if(n%2!=0 && k%2!=0){
    cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++){
        cout<<1<<" ";
    }
    cout<<n-(k-1)<<endl;
    continue;
}
cout<<"No"<<endl;


}
}