#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio

int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++) cin>>v[i];
vector<int>t(n);
for(int i=0;i<n;i++) cin>>t[i];
vector<pair<int,int>>store(n);
for(int i=0;i<n;i++){
    store[i]={t[i],v[i]};
}
vector<int>ans;
ans.push_back(t[0]);

for(int i=1;i<n;i++) {
    ans.push_back(min(v[i-1]+ans[i-1],t[i]));
}

ans[0]=min(v[n-1]+ans[n-1],ans[0]);
for (int i=1;i<n;i++) {
    ans[i]=min(v[i-1]+ans[i-1],t[i]);
}

for(int i=0;i<n;i++) {
    cout<<ans[i]<<endl;
}


}

}