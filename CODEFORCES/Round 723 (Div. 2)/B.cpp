#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
bool is(ll n){
    if(n==0) return true;
    if(n<0) return false;
    return is(n-11) || is(n-111) || is(n-1111) || is(n-11111) || is(n-111111)  ||  is(n-1111111) || is(n-11111111) || is(n-111111111);
}

bool dps(ll n){
    while(1){
        if(n==0){
            return true;
        }
        if(n<0 || n<11){
            return false;
        }
        if(n>=1111111111){
            n-=1111111111;continue;
        }
        if(n>=111111111){
            n-=111111111;continue;
        }
        if(n>=11111111){
            n-=11111111;continue;
        }
        if(n>=1111111){
            n-=1111111;continue;
        }
        if(n>=111111){
            n-=111111;continue;
        }
        if(n>=11111){
            n-=11111;continue;
        }
        if(n>=1111){
            n-=1111;continue;
        }
        if(n>=111){
            n-=111;continue;
        }
        if(n>=11){
            n-=11;continue;
        }
    }
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n;
cin>>n;

if(dps(n)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
}