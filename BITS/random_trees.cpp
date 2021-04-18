#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

ll n,m;
cin >>n >>m;
ll par =n;
ll tea = m;
ll maxP = n-m+1;
ll k_max = (maxP*(maxP-1))/2;
n = par;
m = tea;
ll minP = n/m;   
ll left = n%m;     
ll last = minP + left;
ll k_min = left*((minP+1)*minP)/2 + (m-left)*(minP*(minP-1))/2;
cout<<k_min<<" "<<k_max;

}