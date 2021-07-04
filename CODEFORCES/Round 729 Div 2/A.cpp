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

int n;
cin>>n;

int odd=0,even=0;
for(int i=0;i<2*n;i++){
    int x;
    cin>>x;
    if(x%2==0) even++;
    else odd++;
}
if(even==odd) {
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

}
}