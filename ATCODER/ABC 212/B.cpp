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

string s;
cin>>s;
int a = s[0] - '0';
int b = s[1] - '0';
int c = s[2] - '0';
int d = s[3] - '0';

if(a==b && b==c && d==a){
    cout<<"Weak";
    return 0;
}
if(((b-a)==1 || (b-a)==-9) && ((c-b)==1 || (c-b)==-9) && ((d-c)==1 || (d-c)==-9)){
    cout<<"Weak";
    return 0;
}
cout<<"Strong";

}

}
