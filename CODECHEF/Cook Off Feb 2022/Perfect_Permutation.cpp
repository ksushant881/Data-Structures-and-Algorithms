#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    if(n==1 and k==1){
        cout<<1<<endl;
        return;
    }
    if(k==0 || (n==1 and k!=1) || k==n-1){
        cout<<-1<<endl;
        return;
    }
    int c=n;
    for(int i=1;i<=n;i++){
        arr[i]=c;
        c--;
        k--;
        bool flag=false;
        if(k==0){
            flag=true;
            for(int j=i+1;j<=n;j++){
                arr[j]=j+1;
            }
        }
        if(flag) break;
    }
    f(i,n) cout<<arr[i+1]<<" ";
    cout<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}
