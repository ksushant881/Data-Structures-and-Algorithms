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
string s;
cin>>n>>s;

string res = new char[n];
res[n/2] = s[0];
for(int i=1;i<n/2;i++){
    res[n/2 - i] = s[i];
    res[n/2 + i] = s[i+1];
}

cout<<res<<endl;
}
}