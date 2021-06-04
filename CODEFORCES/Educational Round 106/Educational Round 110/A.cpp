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

 int a,b,c,d;
 cin>>a>>b>>c>>d;
 vector<int>v={a,b,c,d};
 sort(v.begin(),v.end());
 if((a==v[2] && b==v[3]) || (a==v[3] && b==v[2]) || (c==v[2] && d==v[3]) || (c==v[3] && d==v[2])){
     cout<<"NO"<<endl;
 }
 else{
     cout<<"YES"<<endl;
 }
}
}