#include <bits/stdc++.h>

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
fastio
 
string s;
cin>>s;
int n=s.length();
string res="";
int i=0;
bool flag=false;
while(i<n){
    if(i<n-3 && i>0 && s.substr(i,3)=="dot"){
        res.append(".");
        i=i+3;
        continue;
    }

    if(!flag && i<n-2 && i>0 && s.substr(i,2)=="at"){
        res.append("@");
        i=i+2;
        flag=true;
        continue;
    }
    
    
    res.push_back(s[i]);
    i++;

}
cout<<res;
}