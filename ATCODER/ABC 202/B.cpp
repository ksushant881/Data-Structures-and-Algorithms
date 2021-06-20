#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
string s;
cin>>s;

reverse(s.begin(),s.end());
for(int i=0;i<s.length();i++){
    if(s[i]=='6') s[i]='9';
    else if(s[i]=='9') s[i]='6';
}
cout<<s;
}