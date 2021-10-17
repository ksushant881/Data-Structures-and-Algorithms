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
int n;
cin>>n;
int arr[n];
int sum=0;
f(i,n) {
    cin>>arr[i];
    sum+=arr[i];
}
bool flag=0;
for(int i=2;i<sum;i++){
    if(sum%i==0){
        cout<<n<<endl;
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
        flag=1;
        break;
    }
}

if(!flag){
    for(int k=0;k<n;k++){
        int temp=sum-arr[k];
        for(int i=2;i<temp;i++){
            if(temp%i==0){
                cout<<n-1<<endl;
                for(int j=1;j<=n;j++){
                    if(j!=k+1) cout<<j<<" ";
                }
                cout<<endl;
                flag=1;
                break;
            }
        }
        if(flag) break;
    }


}


}

}