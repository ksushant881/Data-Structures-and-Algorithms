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
for(int i=0;i<n;i++){
    if(s[i]=='0') count++;
}

// if(n%2!=0 && count%4==3){
//     cout<<"ALICE"<<"\n";
//     continue;
// }

// if(count%4==0){
//     cout<<"DRAW"<<"\n";
//     continue;
// }
// else{
//     cout<<"BOB"<<"\n";
//     continue;
// }
if(count==1){
    cout<<"BOB"<<"\n";
}
else if(count%2==0){
    cout<<"BOB"<<endl;
}
else{
    cout<<"ALICE"<<endl;
}

}
}