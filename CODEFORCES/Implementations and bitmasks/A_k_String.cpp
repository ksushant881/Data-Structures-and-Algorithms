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
int k;
cin>>k;
string s;
cin>>s;
int arr[26];
f(i,26) arr[i]=0;
int n=s.length();
if(n%k!=0){
    cout<<-1<<endl;
    return 0;
}
f(i,n){
    arr[s[i]-'a']++;
}
string ans="";
// int x=n/k;
// cout<<x<<" "<<n<<" "<<arr[0]<<endl;
f(i,26){
    if(arr[i] && arr[i]%k!=0){
        cout<<-1<<endl;
        return 0;
    }
}
f(i,26){
    if(arr[i]!=0) {
        int x=arr[i]/k;
        while(x--) ans+=('a'+i);
    }
}
string res="";
f(i,k){
    res+=ans;
}

cout<<res<<endl;


}

}