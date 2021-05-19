#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

for(int i=0;i<n;i++){
    ll minFront,minBack;
    ll maxFront,maxBack;
    minFront=minBack=INT64_MAX;
    maxFront=maxBack=INT64_MIN;

    if(i!=n-1) minFront=abs(v[i+1]-v[i]);
    if(i!=0) minBack=abs(v[i]-v[i-1]);
    maxFront=abs(v[n-1]-v[i]);
    maxBack=abs(v[i]-v[0]);
    
    cout<<min(minFront,minBack)<<" "<<max(maxFront,maxBack)<<"\n";
}
}