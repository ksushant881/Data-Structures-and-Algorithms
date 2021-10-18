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
ll n,m;
cin>>n>>m;
float minPrice=(float)INT_MAX;
f(i,n){
    int a,b;
    cin>>a>>b;
    float val = (float)a/b;
    minPrice = min(minPrice,val);
}
cout<<setprecision(9)<<minPrice*m;
return 0;

}