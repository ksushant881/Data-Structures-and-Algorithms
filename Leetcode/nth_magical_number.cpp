#include<bits/stdc++.h>
using namespace std;


/*
Editorial topic NUMBER THEORY::HARD
We are give n a b, a.
A magical number is such that it is either divisible by a or b or both
So till m we have floor(m/a) numbers divisible by a
similarly we have floor(m/b) numbers divisible by b
for numbers divisible by both a and b it has to be divisible by LCM of a and b
Calculate LCM by using GCD of a and b
    LCM(a,b) = (a*b)/GCD(a,b)

this m will be such that it satisfies the equation
n= floor(m/a) + floor(m/b) - floor(m/lcm(a,b))
use binary search to solve such equations

*/



# define ll long long int

    int mod=1e9 + 7;
    ll gcd(ll a,ll b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    
    ll lcm(ll a,ll b){
        return (a*b)/gcd(a,b);
    }
    
    int nthMagicalNumber(int n, int a, int b) {
        ll high=1e17;
        ll low=1;
        ll mid;
        ll target;
        ll lcmab = lcm(a,b);
        while(high > low){
            mid = (high+low)/2;
            target = (mid/a) + (mid/b) - (mid/lcmab);
            if(target < n)
                low = mid+1;
                
            else
                high=mid;
        }
        return high%mod;
    }

int main(){
    cout<< nthMagicalNumber(99,45,67);
}