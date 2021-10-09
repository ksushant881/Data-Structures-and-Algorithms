#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/224/B
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

int n,k;
cin>>n>>k;
vector<int>arr(n);
f(i,n) cin>>arr[i];
map<int,int>mp;
f(i,n){
    mp[arr[i]]++;
}
if(mp.size() < k){
    cout<<"-1 -1"<<endl;
    return 0;
}
mp.clear();
int right=1,left=1;
while(mp.size() != k){
    mp[arr[right-1]]++;
    right++;
}
for(int i=right-1;i<n;i++){
    while(mp.size() == k){
        mp[arr[left-1]]--
    }
}



}

}