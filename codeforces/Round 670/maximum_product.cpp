#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll product(int a,int b,vector<int>v){
    ll p =1;
    for(int i=a;i<=b;i++)
        p*=v[i];
    return p;
}

int main(){
fastio

int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    ll n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll a = product(n-5,n-1,v);
    ll b = product(n-3,n-1,v)*v[0]*v[1];
    ll c = product(0,3,v)*v[n-1];
    cout<<max({a,b,c})<<endl;
}
}