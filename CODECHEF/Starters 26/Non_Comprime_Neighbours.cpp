#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve(){
    int n;
    cin >> n;
    vector<int>v(n+2,1);
    for (int i=1;i<=n;i++){
        cin>>v[i];
    }
    int i=1;
    bool f=1;
    while (i <= n){
        if (f){
            v[i]=v[i+1]*2;
            i+=2;
        }
        else{
            v[i]=v[i-1]*2;
            i++;
        }
        f=!f;
    }
    for (int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
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


