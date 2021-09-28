#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int main(){
fastio

int tc=1;
//cin >> tc;
f(casess,tc){

ll a,b,k;
cin>>k>>a>>b;
ll aa=0,bb=0;
ll x=0;
while(a!=0){
    aa+=((a%10)*(pow(k,x)));
    x++;
    a=a/10;
}
x=0;
while(b!=0){
    bb+=((b%10)*(pow(k,x)));
    x++;
    b=b/10;
}
cout<<aa*bb;

}

}