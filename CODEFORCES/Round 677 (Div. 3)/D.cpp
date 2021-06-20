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
set<ll>st;
map<int,vector<int>>mp;
bool flag=true;
for(int i=0;i<n;i++){
    cin>>v[i];
    st.insert(v[i]);
    mp[v[i]].push_back(i);
}
if(st.size()==1){
    cout<<"NO"<<endl;
    continue;
}

int inx=-1;
vector<pair<int,int>>res;
cout<<"YES"<<endl;
for(int i=1;i<n;i++){
    if(v[i]!=v[0]){
        inx=i;
        res.push_back({1,i+1});
        cout<<1<<" "<<i+1<<endl;
    }
}

for(int i=1;i<n;i++){
    if(v[i]==v[0]){
        cout<<inx+1<<" "<<i+1<<endl;
        res.push_back({inx+1,i+1});
    }
}


}
}