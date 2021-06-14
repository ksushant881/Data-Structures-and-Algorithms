#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSetBits(int n){
    int c=0;
    while(n>0){
        n = (n & n-1);
        c++;
    }
    return c;
}
    int hammingDistance(int x, int y) {
        int k=x^y;
        return countSetBits(k);
        
    }
};

int main(){



}