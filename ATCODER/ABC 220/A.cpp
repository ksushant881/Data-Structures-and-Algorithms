#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void solve(){

}

int main(){
fastio

int tc=1;
//cin >> tc;
f(casess,tc){

int a,b,c;
cin>>a>>b>>c;
for(int i=a;i<=b;i++){
    if(i%c==0){
        cout<<i;
        return 0;
    }
}
cout<<-1;
}

}