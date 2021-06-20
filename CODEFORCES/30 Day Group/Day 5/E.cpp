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
vector<ll>v(n);
for(ll i=0;i<n;i++) cin>>v[i];

ll l=-1,r=-1;
ll countPeaks=0;
bool flag=true;

for(ll i=1;i<n;i++){
    if(flag){ //true then we are counting increasing path
        if(v[i-1] > v[i]){
            l=i-1;
            countPeaks++;
            flag=false;
        }
    }

    else{ //false then we are counting decreasing path
        if(v[i-1]<v[i]){
            r=i-1;
            countPeaks++;
            flag=true;
        }
    }
}

if(countPeaks>2 || l==r){
    cout<<"0 0"<<"\n";
    return 0;
    }
else
    cout<<l<<" "<<r<<"\n";

}