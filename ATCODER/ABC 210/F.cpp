#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
//cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

ll n;
cin >> n;
vector<ll>front(n);
vector<ll>back(n);
for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    front[i] = a;
    back[i] = b;
}

for(ll i = 0;i < n-1; i++){
    for(ll j = i+1;j < n; j++){
        if(__gcd(front[i],front[j]) == 1){
            cout<<"Yes";
            return 0;
        }
    }
}

for(ll i = 0;i < n-1; i++){
    for(ll j = i+1;j < n; j++){
        if(__gcd(back[i],back[j]) == 1){
            cout<<"Yes";
            return 0;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i == j) continue;
        if(__gcd(front[i],back[j]) == 1){
            cout<<"Yes";
            return 0;
        }
    }
}
cout<<"No";
return 0;

}
}