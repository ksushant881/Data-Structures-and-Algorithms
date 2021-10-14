#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        vector<vector<int>>ans(m);
        int x=o.size();
        if(x != m*n) return {};
        int r=0;
        int c=0;
        for(int i=0;i<x;i++){
            ans[r].push_back(o[i]);
            c++;
            if(c == n) {
                r++; 
                c=0;
            }
        }
        return ans;
    }
};

int main(){
 
}