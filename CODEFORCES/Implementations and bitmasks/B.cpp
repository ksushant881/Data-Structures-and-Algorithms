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
int k;
cin>>k;
vector<pair<int,int>>arr;
vector<int>xx;
vector<int>yy;
f(i,k){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    xx.push_back(x);
    xx.push_back(a);
    yy.push_back(y);
    yy.push_back(b);
}
sort(xx.begin(),xx.end());
sort(yy.begin(),yy.end());
cout<<"Case #"<<casess+1<<": "<<xx[k-1]<<" "<<yy[k-1]<<endl;



}

}