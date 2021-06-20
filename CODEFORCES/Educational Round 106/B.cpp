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
string s;
cin>>s;
int n=s.length();

 int i=s.find("11");
 int j=s.rfind("00");
 cout<<((i!=-1 && j!=-1 && i<j)?"NO":"YES") <<endl;
 
}
}