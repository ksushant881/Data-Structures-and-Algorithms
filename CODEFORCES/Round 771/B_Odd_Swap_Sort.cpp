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
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if(x%2) {
            b.push_back(x);
        } 
        else { 
            a.push_back(x);
        }
    }
    for(int i=1;i<a.size();i++){
        if(a[i]<a[i-1]){
            cout<<"No\n";
            return;
        }
    }
    for(int i=1;i<b.size();i++){
        if(b[i]<b[i-1]){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main(){
fastio
int tc=1;
cin >> tc;
f(casess,tc){
   solve();
}
}