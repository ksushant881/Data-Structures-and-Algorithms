#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<int>arr(10);
int highestPowerof2(int n)
{
   int p = (int)log2(n);
   return (int)pow(2, p);
}
void p(vector<int>a){
    for(int i=0;i<a.size()-1;i++){
        cout<<(a[i]^a[i+1])<<" ";
    }
    cout<<endl;
}
void solve(){
    int n;
    cin>>n;
    int k = highestPowerof2(n-1);

    for(int i=k-1;i>=0;i--){
        cout<<i<<" ";
    }
    // cout<<k<<" ";
    for(int i=k;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    // vector<int>a={7,6,5,4,3,2,1,0,8,9};
    // vector<int>b={4,6,3,2,0,8,9,1,7,5};
    // p(a);
    // p(b);
}

int main(){
fastio
int tc=1;

cin >> tc;
f(casess,tc){
   solve();
}
}