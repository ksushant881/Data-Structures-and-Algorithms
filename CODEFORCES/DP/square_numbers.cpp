#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int num;
#define ll long long int
int m;
int arr[100005];

void fun(){
    for(int i=2;i<100005;i++){
        if(arr[i]==1){
            for(int j=i+i;j<100005;j+=i){
                arr[j]=0;
            }
        }
    }
}

ll solve(int n){
    ll ans=0;
    m=sqrt(n);
    for(ll i=2;i*i<=n;i++){
        ll k=i*i;
        ll curr=n/k;
        
        
        ans+=curr;
    }
    return ans;
}
//4 8 12 16 20       24 28 32 36 40
//9 18          27 36
//16           32
//25
//36

int main(){
fastio
int tc=1;
// cin >> tc;
memset(arr,1,sizeof(arr));
f(casess,tc){
    cin>>num;
   cout<<solve(num);
}
}