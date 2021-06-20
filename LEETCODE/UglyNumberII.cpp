#include<bits/stdc++.h>
using namespace std;

//TLE solution
class Solution1 {
public:
    bool isUgly(int n) {
        if(n==0) return false;
        while(n%2==0){
            n/=2;
        }
        while(n%3==0){
            n/=3;
        }
        while(n%5==0){
            n/=5;
        }
        if(n!=1) return false;
        else return true;
    }
    
    int nthUglyNumber(int n) {
        int c=1;
        if(n==1) return 1;
        for(int i=2;;i++){
            if(isUgly(i)) c++;
            if(c == n) return i;
        }
    }
};

int main(){



}