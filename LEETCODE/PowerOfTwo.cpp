#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        ll in = (ll)n;
        if(in==0) return false;
        if((in & (in-1)) == 0) return true;
        else return false;
    }
};

int main(){



}