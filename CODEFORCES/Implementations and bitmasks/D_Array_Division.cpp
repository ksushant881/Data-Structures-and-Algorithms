#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;
void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
ll n;
cin>>n;
ll arr[n];
f(i,n) cin>>arr[i];
ll prefix[n];
prefix[0]=arr[0];
for(ll i=1;i<n;i++){
    prefix[i]=prefix[i-1]+arr[i];
}
map<ll,ll>l,r;
f(i,n){
    r[arr[i]]++;
}
f(i,n){
    l[arr[i]]++;
    r[arr[i]]--;
    if(r[arr[i]]==0) r.erase(arr[i]);
    ll sum_l=prefix[i];
    ll sum_r=prefix[n-1]-prefix[i];
    ll diff = sum_l-sum_r;
    if(diff == 0){
        cout<<"YES"<<endl;
        return 0;
    }
    if(abs(diff)%2==1) continue;
    diff/=2;
    if(diff > 0){
        if(l.find(diff)!=l.end()){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    else{
        if(r.find(-diff)!=r.end()){
            cout<<"YES"<<endl;
            return 0;
        }
    }
}
cout<<"NO"<<endl;
return 0;

}

}