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
string s1,t,s2,s3;
cin>>s1>>s2>>s3>>t;
int n=t.size();
string res="";
for(int i=0;i<n;i++){
    if(t[i]=='1'){
        res+=s1;
    }
    else if(t[i]=='2'){
        res+=s2;
    }
    else{
        res+=s3;
    }
}
cout<<res;

}

}