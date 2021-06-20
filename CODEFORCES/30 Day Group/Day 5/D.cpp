#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll n,x,y;
cin>>n>>x>>y;
ll currSum=(n-1);
if(currSum>=y){
    cout<<"-1"<<"\n";
    return 0;
}

for(ll i=1;;i++){
    if(currSum+(i*i)>=x && currSum+i<=y){
        cout<<i<<"\n";
        for(ll i=0;i<n-1;i++) cout<<"1"<<"\n";
        return 0;
    }
    if(currSum+i>y){
        cout<<"-1"<<"\n";
        return 0;
    }
}

}