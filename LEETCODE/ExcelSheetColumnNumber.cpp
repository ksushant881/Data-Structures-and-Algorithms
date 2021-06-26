#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        long res=0;
        int n=s.length();
        for(int i=1;i<=n-1;i++){
            res+=pow(26,i);            
        }
        for(int i=0;i<n;i++){
            int c = s[i] - 'A';
            res+= c*pow(26,n-i-1);
        }
        return ++res;
    }
};

int main(){



}