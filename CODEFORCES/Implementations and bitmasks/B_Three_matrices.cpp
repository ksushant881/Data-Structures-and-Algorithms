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
int arr[n][n];
f(i,n) f(j,n) arr[i][j];
vector<vector<float>>a(n,vector<float>(n,0));
vector<vector<float>>b(n,vector<float>(n,0));
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        //a[i][j] + b[i][j] = arr[i][j];
        //a[i][n-j] + b[i][n-j] = arr[i][j];
        //a[i][j] == a[n-j];
        //b[i][j] == -b[i][n-j];
    }
}


}

}