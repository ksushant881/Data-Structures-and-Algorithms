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
 vector<int>v(n);
 for(int i=0;i<n;i++) cin>>v[i];
int left,right;
left=right=-1;
for(int i=0;i<n;i++){
    if(v[i]==1){
        left=i;
        break;
    }
}
for(int i=n-1;i>=0;i--){
    if(v[i]==1){
        right=i;
        break;
    }
}
int res=0;
for(int i=left;i<=right;i++){
    if(v[i]==0){
        res++;
    }
}
cout<<res<<endl;
}
}