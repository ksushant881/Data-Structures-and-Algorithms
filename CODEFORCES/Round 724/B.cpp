#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
int n;
cin>>n;
vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];

cout<<3*n<<endl;
for(int i=1;i<=n;i+=2){
    cout<<"2 "<<i<<" "<<i+1<<endl;
    cout<<"1 "<<i<<" "<<i+1<<endl;
    cout<<"2 "<<i<<" "<<i+1<<endl;
    cout<<"1 "<<i<<" "<<i+1<<endl;
    cout<<"2 "<<i<<" "<<i+1<<endl;
    cout<<"1 "<<i<<" "<<i+1<<endl;
}
 
 
}
}