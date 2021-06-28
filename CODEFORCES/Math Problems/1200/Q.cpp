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

ll n,m;
cin>>n>>m;
ll sum=0;
n=n/m;
for(ll i=1;i<=10;i++){
    sum+=(m*i)%10;
}
sum = sum*(n/10);
int rem=n%10;
for(int i=1;i<=rem;i++){
    sum+=(i*m)%10;
}
cout<<sum<<endl;

}
}