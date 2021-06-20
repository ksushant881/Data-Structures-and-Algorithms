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
vector<int>v(n);
for(int i=0;i<n;i++) cin>>v[i];
int c=1;
vector<int>temp(n);
int res=0;
for(ll i=0;i<n;i++){
    if(v[i]==1){
        temp[i]=c;
        res=max(res,c);
        c++;
    }
    else{
        temp[i]=0;
        c=1;
    }
    
}

int local=0;
if(v[0]==1 && v[n-1]==1){
    int i=0;
    for(i=0;i<n-1;i++){
        if(v[i]==1) local++;
        else break;
    }
    for(int j=n-1;j>i;j--){
        if(v[j]==1) local++;
        else break;
    }
    res=max(local,res);
}
cout<<res<<endl;

}