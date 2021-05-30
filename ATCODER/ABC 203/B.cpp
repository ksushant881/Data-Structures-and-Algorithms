#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int n,k;
cin>>n>>k;
ll sum=0;
ll rooms=k*(k+1)/2;
for(int i=1;i<=n;i++){
    ll floor=i*100*k;
    sum+=floor+rooms;
}
cout<<sum;

}