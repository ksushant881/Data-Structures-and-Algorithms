#include<bits/stdc++.h>
using namespace std;

//TLE solution
class NumMatrix {
public:
    vector<vector<int>>arr;
    NumMatrix(vector<vector<int>>& matrix) {
        arr=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++){
            for(int j=col1;j<=col2;j++){
                sum+=arr[i][j];
            }
        }
        return sum;
    }
};

{
    //Efficient solution
    class NumMatrix {
    public:
    vector<vector<int>>arr;
    int row,col;
    vector<vector<int>>sum(row,vector<int>(col,0));
    NumMatrix(vector<vector<int>>& matrix) {
        arr=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++){
            for(int j=col1;j<=col2;j++){
                sum+=arr[i][j];
            }
        }
        return sum;
    }
};

}

int main(){



}