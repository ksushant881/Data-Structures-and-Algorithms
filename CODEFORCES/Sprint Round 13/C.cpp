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
set<char>st;
 for(int i=0;i<n;){
     if(s[i]!=s[i+1]){
         st.insert(s[i]);
         i++;
     }
     else{
         i+=2;
     }
 }
for(auto i:st){
    cout<<i;
}
 cout<<endl;
}
}