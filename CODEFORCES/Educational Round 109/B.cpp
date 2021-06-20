#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++) cin>>v[i];

int count=0;
if(v[0]==1 || v[n-1]==n){
    for(int i=0;i<n;i++){
        if(v[i]==i+1){
            count++;
        }
        else{
            break;
        }
    }

    if(count!=n){
        cout<<1<<"\n";
        continue;
    }
    else{
        cout<<0<<"\n";
        continue;
    }
}

else if(v[0]==n && v[n-1]==1){
    cout<<3<<"\n";
}

else{
    cout<<2<<"\n";
}

}
}