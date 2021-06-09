#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int digits(int n){
    int res=0;
    while(n!=0){
        res++;
        n=n/10;
    }
    return res;
}

int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

    int n;
    cin>>n;
    int d=digits(n);
    int num=n%10;
    d=d*(d+1)/2;
    cout<<(10*(num-1))+d<<endl;
    

}
}