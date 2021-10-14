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
void farem_solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[k];
    for(ll i=0;i<k;i++)
        cin>>arr[i];
    sort(arr,arr+k);
    int curr=0,count=0;
    for(int i=k-1;i>=0;i--){
        if(curr+n-arr[i]<=n){
            count++;
            curr+=n-arr[i];
        }
        else
            break;
    }
    int ans=count,pos=0,rem=k-count;
    for(int i=k-count;i<k;i++){
        if(pos>=arr[i]){
            pos+=n-arr[rem++];
            ans--;
        }
        pos+=n-arr[i];
    }
    cout<<ans<<endl;
}


int main(){
fastio

int tc=1;
cin >> tc;
f(casess,tc){

int n,k;
cin>>n>>k;
vector<int>arr(k);
f(i,k) cin>>arr[i];
sort(arr.begin(),arr.end());
int curr=0;
int count=0;
for(int i=k-1;i>=0;i--){
    if(curr+n-arr[i]<=n){
        count++;
        curr+=n-arr[i];
    }
    else
        break;
}
int ans=count;
int pos=0;
int rem=k-count;
for(int i=k-count;i<k;i++){
    if(pos>=arr[i]){
        pos+=n-arr[rem++];
        ans--;
    }
    pos+=n-arr[i];
}
cout<<ans<<endl;

}

}