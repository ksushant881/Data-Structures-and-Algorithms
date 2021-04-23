#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int i=0;i<tc;i++){
ll x,y,k;
cin >> x >> y >>k;
    ll trades=0;
    ll torches=0;
    ll sticks = 1;
    ll coal = k*y+k;
    
    // while(sticks < coal){
    //     sticks+=(x-1);
    //     trades++;
    // }

    trades = k + (k*y+k-1 + (x-1) -1)/(x-1);

    cout<<trades<<endl;
}
}