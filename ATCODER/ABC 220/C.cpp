#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

int main(){
fastio

int tc=1;
//cin >> tc;
f(casess,tc){

ll n,x;
cin>>n;
vector<ll>v(n);
ll sum=0;
f(i,n){
    cin>>v[i];
    sum+=v[i];
}
cin>>x;
ll q=x/sum;
sum=sum*q;
ll nos=n*q;
for(int i=0;i<n;i++){
    sum+=v[i];
    nos++;
    if(sum>x){
        cout<<nos;
        return 0;
    }
}

}

}