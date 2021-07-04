#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool check(ll n,ll a){
    if(a==1) return true;
    while(n!=1){
        if(n%a!=0) return false;
        n=n/a;
    }
    return true;
}

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n,a,b;
cin>>n>>a>>b;
if(check(n,a)  || n==1 || n%b==1){
    cout<<"Yes"<<endl;
    continue;
}
bool flag=true;
while(1){
    //cout<<n<<endl;
    if(check(n,a) || n==1 || n%b==1){
        cout<<"Yes"<<endl;
        flag=false;
        break;
    }
    n-=b;
    if(n<1) break;
}

if(flag) cout<<"No"<<endl;

}
}