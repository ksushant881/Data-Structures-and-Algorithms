#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll binary_search(vector<ll>&v,ll n,ll x){
    ll high=n-1;
    ll low=0;
    while(high>=low){
        ll mid=low+(high-low)/2;
        if(v[mid]==x){
            return mid;
        }
        else if(v[mid]<x){
            low=mid+1;
        }
        else if(v[mid]>x){
            high=mid-1;
        }
    }
    return low;
}

ll countHelp(vector<ll>&v,ll x,ll col){
    ll inx=binary_search(v,col,x);
    while(v[inx]<=x){
        inx++;
        if(inx==col) return 0;
    }
    return col-inx;
}

int main(){
fastio

 ll a,b,c,d;
 ll res=0;
 cin>>a>>b>>c>>d;

ll row=b-a+1;
ll col=c-b+1;

for(ll i=0;i<row;i++){
    vector<ll>temp(col);
    for(ll j=0;j<col;j++){
        temp[j]=a+b+i+j;
    }
    for(ll k=c;k<=d;k++){
        res+=countHelp(temp,k,col);
    }
}
cout<<res<<"\n";
return 0;
}
