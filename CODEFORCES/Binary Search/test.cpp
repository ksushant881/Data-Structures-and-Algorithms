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
bool check(vector<int>arr,int n,int x,int m){
    // 1 4 2 4
}
void solve(vector<int>arr,int n,int m){
    int k=-1;
    int sum=0;
    f(i,0) {
        k=max(k,arr[i]);
        sum+=arr[i];
    }
    int high=0;
    f(i,m){
        high+=arr[i];

    }
    for(int i=m;i<n;i++){
        high = max(high,high+arr[i]-arr[i-m]);
    }
    int low=k;
    while(high>=low){
        int mid=(high+low)/2;
        if(check(arr,n,x,m)){
            ans=x;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }


}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}