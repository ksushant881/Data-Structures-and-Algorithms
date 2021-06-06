#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void help(vector<ll>v,int n,int a,int b,int i,int &ansa,int &ansb,int &diff){
    if(i==n) {
        if(abs(a-b)<diff){
            ansa=a;
            ansb=b;
            diff=abs(a-b);
        }
        return;
    }

    help(v,n,a+v[i],b,i+1,ansa,ansb,diff);
    help(v,n,a,b+v[i],i+1,ansa,ansb,diff);
    
}

void partition(vector<ll>v,int n){
    int ansa,ansb;
    int diff=INT_MAX;
    help(v,n,0,0,0,ansa,ansb,diff);
    cout<<max(ansa,ansb);
}

int main(){
fastio
 

int n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];


if(n==1) {cout<<v[0]; return 0;}
if(n==2){cout<<max(v[0],v[1]); return 0;}
sort(v.begin(),v.end());

partition(v,n);

// ll a,b;
// a=v[n-1];
// b=v[n-2];

// for(int i=n-3;i>=0;i--){
//     if(a > b){
//         b+=v[i];
//     }
//     else{
//         a+=v[i];
//     }
// }
// cout<<max(a,b);
}
