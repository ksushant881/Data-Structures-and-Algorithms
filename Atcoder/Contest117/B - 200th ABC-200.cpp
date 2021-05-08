#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 

ll n,k;
cin>>n>>k;
while(k--){
    if(n%200==0){
        n/=200;
    }
    else{
        n*=1000;
        n+=200;
    }
}
cout<<n<<endl;
}