#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
fastio

ll tc = 1;
cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

ll n;
cin>>n;
int count = 0;
count = n/10;
if(n%10 == 9) count++;
cout<<count<<endl;
}
}