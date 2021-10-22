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
int n,t;
cin>>n>>t;
vector<int>arr(n);
f(i,n) cin>>arr[i];
vector<int>pre(n+1,0);
f(i,n){
    pre[i+1]=pre[i]+arr[i];
}
int ans=0;
for(int i=0;i<n;i++){
    int high=n-1;
    int low=i;
    int tempAns=0;
    while(high>=low){
        int mid = low+(high-low)/2;
        if(pre[mid+1]-pre[i] <= t){
            tempAns = mid-i+1;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    ans = max(ans,tempAns);
}

cout<<ans<<endl;
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