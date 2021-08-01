#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    bool isPrime(int x){
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    
    bool isThree(int n) {
        if(n==1) return false;
        long long s = sqrt(n);
        if(isPrime(s) && (s*s == n)) return true;
        return false;
    }
};

int main(){

}