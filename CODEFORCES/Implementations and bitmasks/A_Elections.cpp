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
void p(int a,int b,int c){
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int a,b,c;
cin>>a>>b>>c;
int win=max(a,max(b,c))+1;
if(a!=b && b!=c && a!=c) {
    if(win-1==a) p(0,win-b,win-c);
    else if(win-1==b) p(win-a,0,win-c);
    else if(win-1==c) p(win-a,win-b,0);
}
else if(a==b && b==c) p(1,1,1);
else if(a==b && win-1==a) p(1,1,win-c);
else if(a==b && win-1!=a) p(win-a,win-b,0);
else if(b==c && win-1==c) p(win-a,1,1);
else if(b==c && win-1!=c) p(0,win-b,win-c);
else if(a==c && win-1==a) p(1,win-b,1);
else if(a==c && win-1!=a) p(win-a,0,win-c);


}

}