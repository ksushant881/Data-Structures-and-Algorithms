#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll n;
cin>>n;

ll maxLen;
ll secondMaxLen;
string max,secondMax;

string temp1;
string temp2;
ll t1,t2;
cin>>temp1>>t1;
cin>>temp2>>t2;

if(t1>t2){
    maxLen=t1;
    max=temp1;
    secondMaxLen=t2;
    secondMax=temp2;
}
else{
    maxLen=t2;
    max=temp2;
    secondMaxLen=t1;
    secondMax=temp1;
}

for(ll i=2;i<n;i++){
    string s;
    ll h;
    cin>>s>>h;
    if(h>maxLen){
        secondMax=max;
        secondMaxLen=maxLen;
        maxLen=h;
        max=s;
    }
    if(h>secondMaxLen && h<maxLen){
        secondMax=s;
        secondMaxLen=h;
    }
}
cout<<secondMax;
}