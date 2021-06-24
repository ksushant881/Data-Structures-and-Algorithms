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
    ll k;
    cin>>k;

    if(k==1){
        cout<<1<<endl;
        continue;
    }
    string ans="";
    for(ll i=1;i<=(k-2);i++){
        ans+='1';
    }
    //cout<<ans<<endl;
    bool flag=false;

    for(int i=2;i<=9;i++){
        for(int j=2;j<=9;j++){
            ll sum = k-2+i+j;
            ll prod = i*j;
            if(prod>=sum){
                stringstream ss;
                ss << min(i,j);
                ss << max(i,j);
                string temp;
                ss >> temp;
                
                flag=true;
                ans+=temp;
                
                cout<<ans;
                cout<<endl;
                break;
            }
        } 
        if(flag) break;
    }

}
return 0;
}