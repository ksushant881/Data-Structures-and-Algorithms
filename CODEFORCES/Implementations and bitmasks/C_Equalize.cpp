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
    string s,t;
    cin>>s>>t;
    int cost=0;
    f(i,n-1){
        if(s[i]!=t[i]){
            if(i!=n-1 && s[i+1]==t[i] && s[i]==t[i+1]){
                swap(s[i],s[i+1]);
                cost++;
                i++;
            }
            else {
                s[i]=!s[i];
                cost++;
            }
        }
    }
    // cout<<s<<endl<<t<<endl;
    // cout<<cost<<" debug"<<endl;
    if(s[n-1]!=t[n-1] ){
        cost++;
    }
    cout<<cost<<endl;


}

}