#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 


 int n,m;
 set<int>v1;
 set<int>v2;
 cin>>n;
 for(int i=0;i<n;i++) {int x; cin>>x; v1.insert(x);}
 cin>>m;
 for(int i=0;i<m;i++) {int x; cin>>x; v2.insert(x);}
 bool flag=false;
for(auto it1:v1){
    for(auto it2 : v2){
        if(!v1.count(it1 +it2) && !v2.count(it1 +it2)){
            cout<<it1<<" "<<it2<<" ";
            flag=true;
            break;
        }
        
    }
    if(flag) break;
}
}