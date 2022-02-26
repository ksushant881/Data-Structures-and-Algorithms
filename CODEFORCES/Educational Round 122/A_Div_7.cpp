#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;
    int n;
    cin>>n;
    int n1=n,n2=n,cnt1=0,cnt2=0;
    int k=n%10;
    for(int i=0;i<=9;i++){
        if(n1%7==0){
            break;
        }
        n1++;
        cnt1++;
    }
    for(int i=0;i<=9;i--){
        if(n2%7==0){
            break;
        }
        cnt2++;
        n2--;
    }
    if(cnt1+k<10) cout<<n1<<endl;
    else cout<<n2<<endl;
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}