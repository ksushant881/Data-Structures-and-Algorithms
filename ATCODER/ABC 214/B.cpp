#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int factors(int n){
    int c=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n){
                c++;
                break;
            }
            c+=2;
        }
    }
    return c;
}

int main(){
fastio

int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int s,t;
cin>>s>>t;
int ans=0;
for(int i=0;i<101;i++){
    for(int j=0;j<101;j++){
        for(int k=0;k<101;k++){
            if(i+j+k<=s && i*j*k<=t){
                ans++;
            }
        }
    }
}
cout<<ans;
}

}