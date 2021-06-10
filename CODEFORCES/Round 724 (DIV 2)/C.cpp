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
string s;
cin>>s;
map<pair<int,int>,int>mp;
int d=0,k=0;
for(int i=0;i<n;i++){
    if(s[i]=='D') d++;
    else k++;
    int g=__gcd(d,k);
    int currd=d/g;
    int currk=k/g;
    mp[{currd,currk}]++;
    cout<<mp[{currd,currk}]<<" ";
}
 cout<<endl;
 
}
}