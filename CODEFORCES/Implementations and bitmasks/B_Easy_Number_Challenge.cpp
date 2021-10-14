#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1073741824 
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

int d(int n){
    int i;
    if(n==1) return 1;
    int ans=2;
    for(i=2;i*i<n;i++){
        if(n%i==0) ans+=2;
    }
    if(i*i == n) ans++;
    return ans;
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int a,b,c;
cin>>a>>b>>c;
ll ans=0;
for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        for(int k=1;k<=c;k++){
            ans+=d(i*j*k);
            // cout<<i*j*k<<" "<<d(i*j*k)<<endl;
        }
    }
}
cout<<ans<<endl;


}

}