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
int n,v;
cin>>n>>v;
// max
int curr=1;
// 2*(v-curr-1) + 3*(v-curr-1)
ll cost=v;
ll maxAns = (n*(n-1))/2 - 1 + v;

cout<<maxAns<<endl;


}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}