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


int main(){
fastio

ll tc=1;
cin >> tc;
f(casess,tc){

ll c;
cin>>c;

//converting to binary
ll l=c;
vector<ll>bin;
while(l){
    bin.push_back(l%2);
    l=l/2;
}
reverse(bin.begin(),bin.end());

int b=bin.size();
vector<ll>num(b,0); 
//i will store count of set bits coming at this bit
vector<ll>ans;

for(int i=0;i<b;i++){
    if(bin[i]==1 && num[i]%2==0){
        //add a number if u want a 1 and right now number of set bits
        //is even
        ans.push_back((1<<(b-i))-1);
        for(int j=i;j<b;j++) num[j]++;
    }
    else if(bin[i]==0 && num[i]%2!=0){
        //add a number if u want a 0 and right now number of set bits
        //is odd
        ans.push_back((1<<(b-i))-1);
        for(int j=i;j<b;j++) num[j]++;
    }
}
cout<<ans.size()<<endl;
// sort(ans.begin(),ans.end());
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;

}

}