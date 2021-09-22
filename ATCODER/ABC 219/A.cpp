#include<bits/stdc++.h>
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

int x;
cin>>x;
if(x>=90){
    cout<<"expert";
    continue;
}
if(x<40){
    cout<<40-x;
    continue;
}
if(x>=40 && x<70){
    cout<<70-x;
    continue;
}
if(x>=70 && x<90){
    cout<<90-x;
    continue;
}

}

}