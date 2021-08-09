#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<ll> lenOfLongIncSubArr(vector<ll>& arr, ll n){
    ll max = 1, len = 1;
    vector<ll>store;
    for (ll i=1; i<n; i++){
        if (arr[i] > arr[i-1])
            len++;
        else{
            store.push_back(len);
            if (max < len)   
                max = len;
            len = 1;   
        }   
    }
    store.push_back(len);

    if (max < len)
        max = len;
    return store;
}

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n,k;
cin>>n>>k;
vector<ll>v(n);
for(ll i=0;i<n;i++){
    cin>>v[i];
}

if(n==1){
    if(k!=1) cout<<"No"<<endl;
    continue;
}

vector<ll> x=lenOfLongIncSubArr(v,n);
ll sum=0;
for(auto y:x){
    sum+=y;
    cout<<y<<" ";
}
cout<<endl;
ll m = x.size();
if(m <= k){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

}

}