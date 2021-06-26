#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){

int n;
cin>>n;
vector<vector<double>>v(n,vector<double>(3));
for(int i=0;i<n;i++){
    int t;
    double l,r;
    cin>>t>>l>>r;
    v[i][0]=t;
    if(t==3 || t==4) l+=0.1;
    v[i][1]=l;
    if(t==2 || t==4) r-=0.1;
    v[i][2]=r;
}

// for(int i=0;i<n;i++){
//     cout<<v[i][1]<<" "<<v[i][2]<<endl;
// }

ll count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j) continue;
        if((v[j][1]<=v[i][2] && v[j][2]>=v[i][2]) || 
            (v[j][2]>=v[i][1] && v[j][1]<=v[i][1]) || 
            (v[j][1]<=v[i][1] && v[j][2]>=v[i][2]) || 
            (v[j][1]>=v[i][1] && v[j][2] <=v[i][2])
            ){
                count++;
            }
    }
}
cout<<count/2<<endl;
}
}