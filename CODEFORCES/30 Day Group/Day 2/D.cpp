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
ll n=s.length();
stack<char>st;
int res=0;
int local=0;
for(ll i=0;i<n;i++){
    if(s[i]=='('){
        st.push('(');
    }
    else{
        if(!st.empty()){
            local+=2;
            st.pop();
        }
    }
    res=max(local,res);
}
cout<<res<<"\n";
}