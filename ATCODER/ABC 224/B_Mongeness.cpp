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

int h,w;
cin>>h>>w;
int arr[h+1][w+1];
for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
        cin>>arr[i][j];
    }
} 
for(int i=1;i<=h-1;i++){
    for(int j=1;j<=w-1;j++){
        for(int p=i+1;p<=h;p++){
            for(int q=j+1;q<=w;q++){
                // if(i==p && j==q) continue;
                if(arr[i][j] + arr[p][q] <= arr[p][j] + arr[i][q]){
                    continue;
                }
                else{
                    // cout<<i<<" "<<j <<" "<< p<<" "<<q <<" "<<endl;
                    cout<<"No";
                    return;
                }
            }
        }
    }
}
cout<<"Yes";

}

int main(){
fastio
int tc=1;
//cin >> tc;
f(casess,tc){
   solve();
}
}