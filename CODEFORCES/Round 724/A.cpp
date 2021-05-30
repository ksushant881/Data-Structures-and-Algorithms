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
ll n,m;
cin>>n>>m;
string s;
cin>>s;


for(int i=0;i<m;i++){
    if(i>2*n) break;
    vector<ll>inx;
    if(s[0]=='0' && n>1 && s[1]=='1'){
        inx.push_back(0);
    }
    for(int j=1;j<n-1;j++){
        
        if((s[j]=='0' && s[j-1]!='1' && s[j+1]=='1') || (s[j]=='0' && s[j-1]=='1' && s[j+1]!='1')){
            inx.push_back(j);
        }
    }
    if(s[n-1]=='0' && n>1 && s[n-2]=='1'){
        inx.push_back(n-1);
    }
    for(int k=0;k<inx.size();k++){
        //cout<<inx[k]<<" ";
        s[inx[k]]='1';
    }
    //cout<<endl;
    //cout<<s<<endl;
}
cout<<s<<endl;



}
}