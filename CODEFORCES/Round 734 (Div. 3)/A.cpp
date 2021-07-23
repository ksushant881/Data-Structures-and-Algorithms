#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main(){
fastio

ll tc = 1;
cin >> tc;
for(ll cassess = 1; cassess <= tc; cassess++){

int n;
cin>>n;
int first=0;
int second = 0;
if(n%3==0){
    cout<<n/3<<" "<<n/3<<endl;
    continue;
}
int left = n%3;
if(left==1){
    cout<<n/3+1<<" "<<n/3<<endl;
    continue;
}
if(left == 2){
    cout<<n/3<<" "<<n/3+1<<endl;
    continue;
}

}
}