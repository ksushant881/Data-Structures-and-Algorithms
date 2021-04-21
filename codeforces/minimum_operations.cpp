#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio

ll n;
cin >> n;
vector<ll>v(n);

for(int i=0;i<n;i++){
    cin >> v[i];
}
ll count=v[0];
for(int i=1;i<n-1;i++){
    if(v[i] > v[i-1]){
        count+=(v[i] - v[i-1]);
    }
}
cout<<count<<"\n";
return 0;

}