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
cin >> tc;
f(casess,tc){

int x;
cin>>x;
if(x/10 == 0){
    cout<<x<<endl;
    continue;
}
string s="";
bool arr[10];
f(i,10) arr[i]=false;
if(x>45){
    cout<<-1<<endl;
    continue;
}
while(x){
    for(int i=9;i>=1;i--){
        if(!arr[i] && x>=i){
            x-=i;
            s+=to_string(i);
            arr[i]=true;
        }
    }
}
reverse(s.begin(),s.end());
cout<<s<<endl;

}

}