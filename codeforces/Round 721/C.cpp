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
 cin>>n;
 vector<ll>a(n);
 for(int i=0;i<n;i++) cin>>a[i];
int count=0;
 for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
         if(a[i]==a[j]){
             count+=((i+1)*(n-j));
         }
     }
 }
 cout<<count<<"\n";
}
}