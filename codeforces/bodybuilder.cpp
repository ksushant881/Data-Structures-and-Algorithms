#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    ll n,r;
    cin >> n >> r;
    vector<ll>time(n);
    vector<ll>tension(n);
    for(int i=0;i<n;i++)
        cin >> time[i];
    for(int i=0;i<n;i++)
        cin >> tension[i];

    ll x=0;
    ll global=INT_MIN;
    if(n==1){
        cout<<tension[0]<<endl;
        continue;
    }
    for(int i=0;i<n;i++){
        x+=tension[i];
        global = max(global,x);
        if(i!=n-1)
            x-=(time[i+1] - time[i])*r;
        if(x<0)
            x=0;

        
    }
    cout<<global<<"\n";
}
}   