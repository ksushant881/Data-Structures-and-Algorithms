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

int n,x;
cin>>n>>x;
int even=0,odd=0;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2!=0){
        odd++;
    }
    else{
        even++;
    }
}

}
}