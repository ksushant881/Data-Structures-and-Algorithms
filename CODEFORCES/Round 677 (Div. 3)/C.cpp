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
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int ans=-1;
set<ll>st;
ll m=-1;
for(int i=0;i<n;i++){
    st.insert(v[i]);
    m=max(m,v[i]);
}
if(st.size()==1){
    cout<<ans<<endl;
    continue;
}
else{
    for(int i=0;i<n;i++){
        if(v[i]==m){
            if((i>0 && v[i-1]<m)){
                ans=i+1;
                break;
            }
            if(i<n-1 && v[i+1]<m){
                ans=i+1;
                break;
            }
        }
    }
}

cout<<ans<<endl;

}
}