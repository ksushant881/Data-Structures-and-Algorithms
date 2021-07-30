#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
//cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

string s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;
set<string>st;
st.insert(s1);
st.insert(s2);
st.insert(s3);
st.insert(s4);
if(st.count("H") && st.count("2B") && st.count("3B") && st.count("HR")){
    cout<<"Yes";
    return 0;
}
cout<<"No";
return 0;



}
}