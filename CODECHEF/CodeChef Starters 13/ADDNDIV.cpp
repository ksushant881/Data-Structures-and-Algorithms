#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

ll a,b;
cin>>a>>b;
if(a==1){
    cout<<"YES"<<"\n";
    continue;
}

while(gcd(a,b)!=1){
    a/=gcd(a,b);
}

if(a>1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}








}

}