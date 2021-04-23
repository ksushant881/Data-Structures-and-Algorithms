#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int a,b,c,d;
cin >> a>>b>>c>>d;
int m = max(3*a/10,a-(a/250)*c);
int v = max(3*b/10,b-(b/250)*d);
if(m>v)
cout<<"Misha"<<endl;
else if(v>m)
cout<<"Vasya"<<endl;
else
cout<<"Tie"<<endl;
}