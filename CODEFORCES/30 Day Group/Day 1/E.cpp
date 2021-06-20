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
int n;
cin>>n;
int arr[n];
int type[n];
for(int i=0;i<n;i++) cin>>arr[i];
for(int i=0;i<n;i++) cin>>type[i];

bool flag=false;
for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
        flag=true;
        break;
    }
}
if(!flag){
    cout<<"Yes"<<endl;
    continue;
}
set<int>st;
for(int i=0;i<n;i++){
    st.insert(type[i]);
}
if(st.size()==2){
        cout<<"Yes"<<endl;
    }
else{
    cout<<"No"<<endl;
}
}
}