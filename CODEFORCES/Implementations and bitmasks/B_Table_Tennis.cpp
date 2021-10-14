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

ll n,k;
cin>>n>>k;
ll lar=-1;
queue<ll>q;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    q.push(x);
    lar=max(lar,x);
}
ll curr=0;
ll x=q.front();
q.pop();
while(1){
    ll p=q.front();
    q.pop();
    if(x > p){
        curr++;
        q.push(p);
    }
    else{
        curr=1;
        q.push(x);
        x=p;
    }
    if(curr==k || x==lar){
        cout<<x<<endl;
        return 0;
    }
}
return 0;

}

}