#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<bool>>changed(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0 && changed[i][j]==false){
                    for(int p=0;p<m;p++){
                        if(matrix[p][j]!=0) changed[p][j]=true;
                        matrix[p][j]=0;  
                    }
                    for(int p=0;p<n;p++){
                        if(matrix[i][p]!=0) changed[i][p]=true;
                        matrix[i][p]=0;  
                    }
                }
            }
        }
        return;
    }
};

int main(){

}