#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
ll n;
cin>>n;
bool flag=true;
while(n!=0){
    int temp=n%10;
    if(temp!=3 && temp!=7){
        flag=false;
        cout<<"BETTER LUCK NEXT TIME"<<endl;
        break;
    }
    n=n/10;
}

if(flag){
    cout<<"LUCKY"<<endl;
}
 
 
}
}