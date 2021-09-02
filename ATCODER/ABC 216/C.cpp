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

ll n;
cin>>n;
string s="";
while(n!=0){
    if(n%2 == 0){
        s+='B';
        n=n/2;
    }
    else{
        s+='A';
        n--;
    }
}
for(int i=s.length()-1;i>=0;i--){
    cout<<s[i];
}

}

}