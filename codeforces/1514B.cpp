// Problem link : https://codeforces.com/problemset/problem/1514/B
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
int n,k;
cin >> n >> k;
ll res=1;
for(int i=0;i<k;i++){
    res = (res*n)%mod;
}
cout<<res<<endl;
}
}