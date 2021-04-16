#include<bits/stdc++.h>
using namespace std;

    bool isPowerOfThree(int n) {
        if(n==1)
            return true;
        if(n==0)
            return false;
        if(n%3==0)
           return isPowerOfThree(n/3);
        else return false;
        return false;
    }
    
int main(){
    cout<<isPowerOfThree(45);
}