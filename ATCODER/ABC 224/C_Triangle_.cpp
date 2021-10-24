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

bool collinear(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
  return (y1 - y2) * (x1 - x3) == (y1 - y3) * (x1 - x2);
}

void solve(){
int n;
cin>>n;
vector<vector<ll>>arr(n);
f(i,n){
    int x,y;
    cin>>x>>y;
    arr[i]={x,y};
}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(!collinear(arr[i][0],arr[i][1],arr[j][0],arr[j][1],arr[k][0],arr[k][1]))
                ans++;
        }
    }
}
cout<<ans/6;
return;

}

int main(){
fastio
int tc=1;
//cin >> tc;
f(casess,tc){
   solve();
}
}