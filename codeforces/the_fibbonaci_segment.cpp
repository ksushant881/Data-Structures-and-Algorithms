#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int n;
cin >> n;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin >> v[i];
}
if(n < 3){
    cout << n << endl;
    return 0;
}
int local = 2;
int global = 0;
for(int i=2;i<n;i++){
    if(v[i-1] + v[i-2] == v[i])
        local++;
    
    else
        local = 2;
    global = max(global,local);
}
cout<<global<<endl;

}