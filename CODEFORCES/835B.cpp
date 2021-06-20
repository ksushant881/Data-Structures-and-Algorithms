#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll digitsss(ll n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}

ll sumOfDigits(ll n){
    ll sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
fastio
 
int tc=1;
//cin >> tc;
for(int casess=0;casess<tc;casess++){
ll k,n;
cin>>k>>n;
int digits=digitsss(n);
if(sumOfDigits(n) > k){
    cout<<"0";
    return 0;
}
else{
    int s=sumOfDigits(n);
    int inc = k - s;
    while(inc){
        
    }
}


}
}