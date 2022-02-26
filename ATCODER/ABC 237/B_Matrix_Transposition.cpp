#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int h,w;
    cin>>h>>w;
    ll arr[h+1][w+1];
    f(i,h) f(j,w) cin>>arr[i+1][j+1];
    f(i,w) {
        f(j,h){
            cout<<arr[j+1][i+1]<<" ";
        } 
        cout<<endl;
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}