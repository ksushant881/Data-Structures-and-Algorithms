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

 ll n,a,b;
 cin>>n>>a>>b;
 set<char>st;
 st.insert('E');
 st.insert('Q');
 st.insert('U');
 st.insert('O');
 st.insert('N');
 st.insert('I');
 st.insert('X');
 ll score1=0;
 ll score2=0;
 for(ll i=0;i<n;i++){
     string s;
     cin>>s;
     if(st.count(s[0])){
         score1+=a;
     }
     else{
         score2+=b;
     }
 }
 if(score1==score2){
     cout<<"DRAW"<<endl;
     continue;
 }
 if(score1>score2){
cout<<"SARTHAK"<<endl;
 }
 else{
     cout<<"ANURADHA"<<endl;
 }
 
 
}
}