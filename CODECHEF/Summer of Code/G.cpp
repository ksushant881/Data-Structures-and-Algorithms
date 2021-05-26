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
int countE=0;
bool f1,f2,f3,f4;
f1=f2=f3=f4=false;
for(int i=0;i<n;i++){
    if(s[i]=='E' && i!=0 && i!=n-1){
        countE++;
    }
    if(s[i]=='C'){
        f1=true;
    }
    if(s[i]=='o') f2=true;
    if(s[i]=='D') f3=true;
    if(s[i]=='e') f4=true;
}
 if(countE>0 && f1 && f2 && f3 && f4){
     cout<<"SELECTED"<<endl;
 }
 else{
     cout<<"REJECTED"<<endl;
 }
 
}
}