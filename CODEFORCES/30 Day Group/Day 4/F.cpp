#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int n,m;
cin>>n>>m;
vector<int>watered(n+1,0);
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    for(int j=a;j<=b;j++){
        watered[j]++;
}
}
for(int i=1;i<=n;i++){
    if(watered[i]!=1){
        cout<<i<<" "<<watered[i]<<"\n";
        return 0;
    }
}
cout<<"OK"<<"\n";
return 0;
}