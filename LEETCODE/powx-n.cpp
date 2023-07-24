#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0){
            n = abs(n);
            x = 1/x;
        }
        if(n%2 == 0){
            return myPow(x*x, n/2);
        } else {
            return x*myPow(x*x,n/2);
        }
    }
};

int main(){
    
}