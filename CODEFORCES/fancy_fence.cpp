#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc;
cin >> tc;
for(int i=0;i<tc;i++){
    int a;
    cin >> a;
    bool flag=false;
    for(ll i=3;i<500000;i++){
        float temp = ((i-2)*180);
        temp/=i;
        //cout<<i<<" "<<temp<<endl;
        if(temp == a){
            flag = true;
            break;
        }
        else if(temp > a){
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}