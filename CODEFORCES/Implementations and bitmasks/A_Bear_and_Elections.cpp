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
int n;
cin>>n;
int m=-1;
int arr[n-1];
int lim;
cin>>lim;
f(i,n-1) {
    cin>>arr[i];
    m=max(m,arr[i]);
}
int cnt=0;
bool flag=1;

while(flag){
    flag=0;
    pair<int,int>p;
    p.first=-1;
    for(int i=0;i<n-1;i++){
        if(p.first < arr[i]){
            p.first=arr[i];
            p.second=i;
        }
    }
    if(p.first >= lim){
        flag=1;
        lim++;
        arr[p.second]--;
        cnt++;
    }
}
cout<<cnt<<endl;



return 0;


}

}