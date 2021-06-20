#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int countOne(ll n){
    int c=0;
    while(n!=0){
        n=n&n-1;
        c++;
    }
    return c;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int n,m,k;
cin >> n >> m >> k;
vector<ll>x(m+1);
for(int i=0;i<m+1;i++){
    cin >> x[i];
}

ll target = x[m];
int res;
int count=0;
for(int i=0;i<m;i++){
    res = x[i]^x[m];
    if(countOne(res) <= k)
        count++;
}
cout<<count;


}