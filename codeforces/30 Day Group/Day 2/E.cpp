#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
string s="No solution";
int a,b,n;
cin>>a>>b>>n;

for(int i=-1000;i<1001;i++){
    if(a*(pow(i,n))==b)
        {
            cout<<i<<"\n";
            return 0;
        }
}
cout<<s<<"\n";
}