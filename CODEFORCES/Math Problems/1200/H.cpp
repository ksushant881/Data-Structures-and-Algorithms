#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int nums(int n){
    int c=0;
    while(n!=0){
        n/=2;
        c++;
    }
    return c;
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;

map<ll,ll>bits;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    ll k=nums(v[i]);
    bits[k]++;
}
ll count=0;
for(auto x:bits){
    ll n=x.second-1;
    count+=(n*(n+1))/2;
}
cout<<count<<endl;


}
}