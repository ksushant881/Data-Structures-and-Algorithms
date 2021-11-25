#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

char arr[9][9];
void solve(){
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    if(arr[a][b] != arr[p][q]){
        cout<<1<<endl;
    }
    else if(a==p && b==q){
        cout<<0<<endl;
    }
    else{
        cout<<2<<endl;
    }
}

int main(){
fastio
int tc=1;
bool flag=true;
for(int i=1;i<=8;i++){
    for(int j=1;j<=8;j++){
        if(flag){
            if(j%2!=0){
                arr[i][j]='W';
            }
            else{
                arr[i][j]='B';
            }
        }
        else{
            if(j%2==0){
                arr[i][j]='W';
            }
            else{
                arr[i][j]='B';
            }
        }
    }
    flag=!flag;
}
// for(int i=1;i<=8;i++){
//     for(int j=1;j<=8;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
cin >> tc;
f(casess,tc){
   solve();
}
}