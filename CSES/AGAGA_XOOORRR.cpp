#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
fastio
 
int tc=1;
cin >> tc;
for(int m=0;m<tc;m++){
    int n;
    cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int>orr(n-1);
    for(int i=0;i<n-2;i++){
        orr[i] = v[i]|v[i+1];
    }
    



}
}