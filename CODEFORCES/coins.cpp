#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
ll n;
cin >> n;
vector<ll>v;
v.push_back(1);
for(int i=2;i<n;i++){
    bool flag=true;
    for(int j=0;j<v.size();j++){
        if(i%v[i] != 0){
            flag=false;
            break;
        }
            
    }
    if(flag)
        v.push_back(i);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}