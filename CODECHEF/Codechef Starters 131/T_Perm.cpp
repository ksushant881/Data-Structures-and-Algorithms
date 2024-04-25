#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void convertToTernary(int N){
    if (N == 0)
        return;
    int x = N % 3;
    N /= 3;
    if (x < 0)
        N += 1;
    convertToTernary(N);

    if (x < 0)
        cout << x + (3 * -1);
    else
        cout << x;
}

void solve(){
    for(int i=1;i<50;i++){
        cout<<i<<" : ";
        convertToTernary(i);
        cout<<endl;
    }
}

int main(){
    int tc=1;
    cin>>tc;
    f(i,tc){
        solve();
    }
}