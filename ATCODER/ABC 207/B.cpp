#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){
ll a,b,c,d;
cin>>a>>b>>c>>d;
if((d*c - b) <= 0) {
    cout<<-1;
    return 0;
}
int res = (a)/(d*c - b);
if(a%(d*c - b)!=0) res++;
cout<<res;

}
}