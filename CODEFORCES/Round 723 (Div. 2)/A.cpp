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

int n;
cin>>n;
int size=2*n;
vector<ll>v(size);
for(int i=0;i<size;i++) cin>>v[i];

sort(v.begin(),v.end());

for(int i=1;i<(size)/2;i+=2){
    swap(v[i],v[size-1-i]);
}
for(int i=0;i<size;i++){
    cout<<v[i]<<" ";
}
cout<<"\n";
 
}
}