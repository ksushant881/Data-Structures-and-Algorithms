#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        long long k=1;
        while((k*(k+1))/2 <= n){
            k++;
        }
        return k-1;
    }
};

int main(){

}