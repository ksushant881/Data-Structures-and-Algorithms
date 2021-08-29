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

int n;cin>>n;
string s;
cin>>s;

bool flag=false;
for(int i=0;i<n;i++){
    if(s[i] == '0'){
        flag=true;
        break;
    }
}
if(!flag){
    cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
    continue;
}

for(int i=0;i<n;i++){
    if(s[i] == '0'){
        if(i < n/2){ 
            cout<<i+2<<" "<<n<<" "<<i+1<<" "<<n<<endl;
            break;
        }
        else {
            cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl;
            break;
        }
    }
}


}

}