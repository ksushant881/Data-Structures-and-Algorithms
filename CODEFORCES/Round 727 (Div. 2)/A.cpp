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
    for(int casess=0;casess<tc;casess++){
        ll n,x,t;
        cin >> n >> x >> t;

        ll res = 0;
        ll add = t/x;
        
        ll end = (n-1)*x - 1;
        
        ll m = min(n-1,add);
        cout<< m*(n-m) + (m*(m-1))/2<<endl;
        
}
}