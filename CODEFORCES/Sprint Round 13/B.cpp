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
int n;
cin>>n;
string s;
cin>>s;
int count=0;
stringstream ss;
int x;
for(int i=0;i<n;i++){
    if((s[i]-'0')&1==1)
        count++;
}

    

if(count<=1){
    cout<<-1<<endl;
    continue;
}
 
 int local=0;
 for(int i=0;i<n;i++){
     if((s[i]-'0')&1 == 1){
         local++;
         cout<<s[i];
     }
     if(local==2) break;
 }
 cout<<endl;
}
}