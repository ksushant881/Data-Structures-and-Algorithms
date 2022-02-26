#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin>>n;
    if(n==3){
        cout<<"3 2 1 \n1 3 2 \n3 1 2";
        return;
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        for(int j=n;j>=1;j--){
            if(j==i){
                continue;
            }
            cout<<j<<" ";
        }
        cout<<endl;
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
