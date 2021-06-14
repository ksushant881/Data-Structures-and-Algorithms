#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int n=p.size();
        int e=0,o=0;
        for(int i=0;i<n;i++){
            if(p[i]%2==0) e++;
            else o++;
        }
        if(e==o) return e;
        if(e>o){
            return o;
        }
        else{
            return e;
        }
    }
};

int main(){



}