#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){

string s;
cin>>s;
int n=s.length();
if(s.length()%2 != 0){
    for(int i=0;i<(s.length()+1)/2;i++) cout<<"4";
    for(int i=0;i<(s.length()+1)/2;i++) cout<<"7";
    return 0;
}

for(int masks=0;masks<(1<<n);masks++){
    
}



}

}