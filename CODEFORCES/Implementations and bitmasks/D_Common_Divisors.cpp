#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;
void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){

string s,k;
cin>>s>>k;
int n1=s.length(),n2=k.length();
string small1;
for(int i=1;i<=s.length()/2;i++){
    if(s.substr(0,i) == s.substr(i,i)){
        small1=s.substr(0,i);
        break;
    }
}
int f1=small1.length();
set<string>st1;
string temp1=small1;
while(f1<=n1){
    f1=temp1.length();
    if(n1%f1==0){
        st1.insert(temp1);
    }
    temp1+=small1;
}


string small2;
for(int i=1;i<=k.length()/2;i++){
    if(k.substr(0,i) == k.substr(i,i)){
        small2=k.substr(0,i);
        break;
    }
}
int f2=small2.length();
if(f2==0){
    cout<<1<<endl;
    return 0;
}
set<string>st2;
string temp2=small2;
int c=0;
while(f2<=n2){
    f2=temp2.length();
    if(n2%f2==0){
        if(st1.find(temp2)!=st1.end()) c++;
    }
    temp2+=small2;
}
cout<<c<<endl;

}

}