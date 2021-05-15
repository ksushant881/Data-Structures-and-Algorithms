#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll fact(ll n){
    ll c=6;
    for(int i=4;i<=n;i++){
        c=c*i;
    }
    return c;
}

void get(int n,int &a,int &b,int &c,int &d){
    a=b=c=d=-1;
    while(n!=0){
        int temp=n%10;
        n=n/10;
        if(d==-1) {d=temp; continue;}
        if(c==-1) {c=temp; continue;}
        if(b==-1) {b=temp; continue;}
        if(a==-1) {a=temp; continue;}
    }
    if(a==-1) a=0;
    if(b==-1) b=0;
    if(c==-1) c=0;
    if(d==-1) d=0;
}

int main(){
fastio
 
string s;
cin>>s;
int n=s.length();

int oo=0,x=0,q=0;
for(int i=0;i<n;i++){
    if(s[i]=='x') x++;
    if(s[i]=='?') q++;
    if(s[i]=='o') oo++;
}

int res=0;
for(int i=0;i<=9999;i++){
    int a,b,c,d;
    get(i,a,b,c,d);
    int local=0;

    if(s[a]=='x' || s[b]=='x' || s[c]=='x' || s[d]=='x'){
        continue;
    }
    
        if(s[a]=='o') local++;
        if(s[b]=='o') local++;
        if(s[c]=='o') local++;
        if(s[d]=='o') local++;

        if(local>=oo) {cout<<a<<b<<c<<d<<endl; res++;}
    
}
cout<<res;
}