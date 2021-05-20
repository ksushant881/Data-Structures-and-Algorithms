#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


bool check(int n){
    return (n&(n-1));
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

 ll n;
 cin>>n;
 ll res;

ll curr=1;
while(curr*2<=n){
    curr*=2;
}
cout<<curr-1<<"\n";

//  while(n){
//      if(!check(n)){
//          res=n-1;
//          break;
//      }
//      n--;
//  }
// cout<<res<<"\n";
 
}
}