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

ll k;
cin>>k;
string s;
cin>>s;
bool flag=false;
for(int i=0;i<k;i++){
    if(s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9'){
        cout<<1<<endl;
        cout<<s[i]<<endl;
        flag=true;
        break;
    }
}

if(flag) continue;
else{
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(s[j] == '2' || s[j] == '5'){
                cout<<2<<endl;
                // string ans=to_string(s[i])+s[j];
                cout<<s[i]<<s[j]<<endl;
                flag=true;
                break;
            }

            if(s[i] == s[j]){
                cout<<2<<endl;
                // string ans=to_string(s[i])+s[j];
                cout<<s[i]<<s[i]<<endl;
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) continue;
    else{
        for(int i=0;i<k-1;i++){
            if(s[i] == '2' || s[i] == '7' || s[i] == '5'){
                for(int j=i+1;j<k;j++){
                    if(s[j] == '2' || s[j] == '7' || s[j] == '5'){
                        cout<<2<<endl;
                        //string ans=to_string(s[i])+s[j];
                        cout<<s[i]<<s[j]<<endl;
                        flag=true;
                        break;
                    }  
                }
                if(flag) break;
            }
        }
    }
}

}

}