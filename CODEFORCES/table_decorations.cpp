#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
vector<ll>v(3);
for(int i=0;i<3;i++){
    cin >> v[i];
}
sort(v.begin(),v.end());
cout<<min((v[0]+v[1]+v[2])/3,v[0]+v[1])<<endl;

}