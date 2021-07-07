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

ll a,b;
cin>>a>>b;

if(a==b){
    cout<<0<<" "<<0<<endl;
    continue;
}
if(b<a) swap(a,b);
ll c1=0,c2=0;
ll diff = abs(a-b);
c1 = b%diff;
c2 = (b+diff)/diff;
c2 = c2*diff - b;
cout<<diff<<" "<<min(c1,c2)<<endl;

}
}