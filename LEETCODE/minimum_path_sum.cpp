#include<bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
         int path=0;
        int n=triangle.size();
        for(int r=n-2;r>=0;r--){
            int sum=0;
            int global=99999999999999;
        for(int i=0;i<r+1;i++){
            sum=triangle[r][i]+min(triangle[r+1][i],triangle[r+1][i+1]);
            if(sum<global)
                global=sum;
        }
            path+=global;
        }
        return path;
    }


int main(){

}