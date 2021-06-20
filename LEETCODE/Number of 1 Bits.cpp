#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int hammingWeight(uint32_t n) {
        int c=0;
        while(n>0){
            n= n&(n-1);
            c++;
        }
        return c;
    }

int main(){
fastio

}