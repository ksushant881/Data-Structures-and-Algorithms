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
int n;
cin>>n;
vector<int>pre(5001,0);
vector<int>arr(n);
f(i,n) {
    cin>>arr[i];
    pre[arr[i]]++;
}
f(i,5000){
    pre[i+1]+=pre[i];
    // cout<<pre[i]<<" ";
}
// cout<<endl;
int ans;
int high=5000,low=1;
int nos;
while(high >= low){
    int mid = (high+low)/2;
    int range = 2*mid;

    int temp = pre[range]-pre[mid-1];
    if(temp >= nos){
        nos=temp;
        low=mid+1;
    }
    else high=mid-1;
}
cout<<n - nos<<endl;
return;


}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}