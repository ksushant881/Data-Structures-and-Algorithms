#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    int minPartitions(string n) {
        char maxx='0';
        int len=n.length();
        for(int i=0;i<len;i++){
            maxx=(n[i] > maxx)? n[i]:maxx;
        }
        return maxx-'0';
    }
};

int main(){



}