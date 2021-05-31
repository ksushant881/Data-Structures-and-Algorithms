#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        int r=mat.size();
        int c=mat[0].size();
        
        for(int i=0;i<c;i++){
            priority_queue<int,vector<int>,greater<int>>temp;
            temp.push(mat[0][i]);
            for(int j=1;j<r;j++){
                if(i+j>=c) break;
                temp.push(mat[j][i+j]);
            }
            mat[0][i]=temp.top();
            //cout<<temp.top()<<" ";
            temp.pop();
            
            for(int j=1;j<r;j++){
                if(i+j>=c) break;
                //cout<<temp.top()<<" ";
                mat[j][i+j]=temp.top();
                temp.pop();
            }
            //cout<<endl;
        }

        for(int i=1;i<r;i++){
            priority_queue<int,vector<int>,greater<int>>temp;
            temp.push(mat[i][0]);
            for(int j=1;j<c;j++){
                if(i+j>=r) break;
                temp.push(mat[i+j][j]);
            }
            mat[i][0]=temp.top();
            //cout<<temp.top()<<" ";
            temp.pop();
            for(int j=1;j<c;j++){
                if(i+j>=r) break;
                mat[i+j][j]=temp.top();
                //cout<<temp.top()<<" ";
                temp.pop();
            }
            //cout<<endl;
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return mat;

    }
};

int main(){

vector<vector<int>>v1={
    {3,3,1,1},
    {2,2,1,2},
    {1,1,1,2}
};

vector<vector<int>>v2={
    {11,25,66,1,69,7},
    {23,55,17,45,15,52},
    {75,31,36,44,58,8},
    {22,27,33,25,68,4},
    {84,28,14,11,5,50}
};

Solution s;
s.diagonalSort(v1);
cout<<endl;
s.diagonalSort(v2);

}