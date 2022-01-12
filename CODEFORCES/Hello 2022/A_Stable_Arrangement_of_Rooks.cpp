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
    if((n%2==0 && k>n/2) || (n%2!=0 && k>n/2+1)){
        cout<<-1<<endl;
        return;
    }
    vector<vector<char>>arr(n+1,vector<char>(n+1,'.'));
    for(int i=1,j=1;i<=n;i+=2,j+=2){
        arr[i][j]='R';
        k--;
        if(k==0) break;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j];
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