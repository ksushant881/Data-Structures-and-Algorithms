#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool ord(ll n){
    unordered_set<ll>st;
    ll temp;
    while(n!=0){
        temp=n%10;
        n=n/10;
        st.insert(temp);
        if(st.size()>1)
            return false;
    }
    return true;
}


void fill(vector<ll>&v,ll n){
    
    for(ll i=1;i<n;i++){
        if(ord(i)){
            v[i]=1;
        }
    }
    for(ll i=2;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
}



int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n;
cin >> n;

int d,k;
int res=0;
for(d=1;d<=9;d++){
    int num=0;
    for(k=0;k<=8;k++){
        num+=d*pow(10,k);
        if(num <= n) res++;
    }
}
cout<<res<<endl;
}
}

