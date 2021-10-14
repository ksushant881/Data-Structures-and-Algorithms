//given a<=b<=c we can increse/decrease
//find min operations to b%a=0 && c%b=0
//hint : sieve
#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    vector<bool>arr(n+1,true);
    for(int i=2;i<=n;i++){
        for(int j=2*i;j<=n;j+=i){
            arr[j] = false;
        }
    }
}

int main(){

}