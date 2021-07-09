#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int check(ll n){
    int i=1;
    while(n%i==0){
        i++;
    }
    return i;
}

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

ll n;
cin>>n;
ll res=0;
ll even=0;
ll odd=0;
ll six=0;
six=n/6;
ll sixty = n/60;
if(n%2==0){
    even=n/2;
    odd=n/2;
}
else if(n%2!=0){
    even=(n-1)/2;
    odd=(n+1)/2;
}
even-=six;

ll add = 81*sixty;



res+=even*3;
res+=odd*2;

cout<<res<<endl;


}
}