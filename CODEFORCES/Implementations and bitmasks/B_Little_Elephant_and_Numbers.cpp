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
set<int>st;
bool check(int k){
    while(k){
        int temp=k%10;
        if(st.find(temp)!=st.end()) return true;
        k=k/10;
    }
    return false;
}

int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){

int x;
cin>>x;
int temp=x;
while(temp){
    st.insert(temp%10);
    temp=temp/10;
}
int d=0;
for(int i=1;i*i<=x;i++){
    if(x%i == 0 && check(i)) d++;
    if(i*i != x && x%i==0 && check(x/i)) d++;
}
cout<<d<<endl;

}

}