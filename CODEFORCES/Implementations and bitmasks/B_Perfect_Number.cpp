#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
ll sum(ll n){
    ll s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(){
fastio
ll k;
cin>>k;

ll c=0;
ll i=1;
while(1){
    i++;
    if(sum(i)==10) c++;
    if(c==k){
        cout<<i;
        return 0;
    }
}

}