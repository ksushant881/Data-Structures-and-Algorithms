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
int size;
cin>>size;

vector<int>v(size);
for(int i=0;i<size;i++) cin>>v[i];
bool flag=false;
for(int i=1;i<size-1;i++){
    if(v[i]==(v[i-1]+v[i+1])/2){
        flag=true;
        break;
    }
}
if(flag){cout<<1<<endl; continue;}
if(v[size-1]==(v[size-2]+v[0])/2){cout<<1<<endl; continue;}
if(v[0]==(v[1]+v[size-1])/2){cout<<1<<endl; continue;}
cout<<0<<endl;
}
}