#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int n;
cin>>n;

ll spent=0;
vector<int>eat(n);
vector<int>price(n);

for(int i=0;i<n;i++){
    cin>>eat[i];
    cin>>price[i];
} 

vector<int>bought(n);
bought[0]=price[0];
for(int i=1;i<n;i++){
    bought[i]=price[i];
    if(price[i]>bought[i-1]){
        bought[i]=bought[i-1];
    }
}

for(int i=0;i<n;i++){
    spent+=(eat[i]*bought[i]);
}

cout<<spent<<"\n";


}