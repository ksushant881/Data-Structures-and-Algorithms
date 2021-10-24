#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){
int a,b,c;
cin>>a>>b>>c;
ll s=a+b*2+c*3;
if(s%2==0){
    cout<<0<<endl;
}
else{
    cout<<1<<endl;
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