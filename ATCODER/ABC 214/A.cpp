#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
fastio

int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
if(n<=125){
    cout<<4;

}
else if(n>=126 && n<=211){
    cout<<6;
}
else{
    cout<<8;
}

}

}