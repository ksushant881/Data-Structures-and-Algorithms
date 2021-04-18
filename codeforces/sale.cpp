#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int n,m;
cin >> n >> m;
vector<int>prices(n);
for(int i=0;i<n;i++)
    cin >> prices[i];
sort(prices.begin(),prices.end());
int res=0;
for(int i=0;i<m;i++){
    res+=prices[i];
}
res*=-1;
cout<<res;
}