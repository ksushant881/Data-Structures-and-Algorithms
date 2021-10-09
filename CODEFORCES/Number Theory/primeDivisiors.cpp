#include<bits/stdc++.h>
using namespace std;

/*
Given number a and b, check if a is divisible by all rpime divisors of b
a=12 b=18
factors 2,3
*/

bool solve(int a,int b){
    while(__gcd(a,b) != 1){
        b=b/__gcd(a,b);// gcd = 6 b=3 a=12  | gcd=3 b=1 a=4
    }
    return b == 1;
}

int main(){

}