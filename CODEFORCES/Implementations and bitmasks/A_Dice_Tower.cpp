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

int n,x;
cin>>n>>x;
int arr[n][2];
f(i,n) {
    cin>>arr[i][0]; 
    cin>>arr[i][1]; 
}
int bottom;
for(int i=0;i<n;i++){
    if(i==0){
        bottom=7-x;
    }
    else{
        set<int>used={arr[i][0],arr[i][1],7-arr[i][0],7-arr[i][1]};
        if(used.find(bottom)!=used.end()){
            // cout<<bottom<<endl;
            // for(auto x:used) cout<<x<<" ";
            // cout<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
    }
}
cout<<"YES";
return 0;
}

}