#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumBase(int n, int k) {
        int res=0;
        while(n!=0){
            res+=n%k;
            n=n/k;
        }
        return res;
    }
};

int main(){


}