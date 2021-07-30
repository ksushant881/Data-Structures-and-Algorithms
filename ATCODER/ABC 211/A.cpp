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

int a,b;
cin>>a>>b;
float c = (float)(a-b)/3 + b;
cout<<c;
}
}