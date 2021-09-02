#include<bits/stdc++.h>
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

int n;
cin>>n;
string s;
cin>>s;
int k;
for( k=0;k<n;k++){
    if(s[k]=='B' || s[k]=='R') break;
}
if(k==n){
    for(int j=1;j<=n/2;j++){
        cout<<"BR";
    }
    if(n%2!=0){
        cout<<"B"; 
    }
    cout<<endl;
    continue;
}

bool flag=false;
while(flag==false){
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            if(i+1<n && s[i+1]=='?') s[i+1]='R';
            if(i-1>=0 && s[i-1]=='?') s[i-1]='R';
        }
        else if(s[i] == 'R'){
            if(i+1<n && s[i+1]=='?') s[i+1]='B';
            if(i-1>=0 && s[i-1]=='?') s[i-1]='B';
        }
    }
    int i;
    for( i=0;i<n;i++){
        if(s[i]=='?') break;
    }
    if(i==n) flag=true;
}
cout<<s<<endl;

}

}