#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int a,b,c;
cin>>a>>b>>c;
ll sum=a+b+c;
if(3*a==sum || 3*b==sum || 3*c==sum)
{
    cout<<"Yes"<<"\n";
}
else{
    cout<<"No"<<"\n";
}
return 0;
}