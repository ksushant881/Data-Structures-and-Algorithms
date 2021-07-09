#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(vector<int>v){
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    void rec(vector<int>&res,vector<vector<int>>& m,int row,int col,int ii,int jj){
        for(int i=jj;i<col;i++){
                res.push_back(m[ii][i]);
        }
        print(res);
        for(int i=ii+1;i<row;i++){
                res.push_back(m[i][col-1]);
        }
        print(res);
        for(int i=col-2;i>=jj;i--){
                res.push_back(m[row-1][i]);
        }
        print(res);
        for(int i=row-2;i>=ii+1;i--){
                res.push_back(m[i][jj]);
        }
        print(res);
    }
    
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int roww = m.size();
        int coll = m[0].size();
        vector<int>res;
        int i=0,j=0;
        int resSize = roww*coll;
       for(int k=0;k<=(roww)/2;k++){
            rec(res,m,roww,coll,i,j);
            roww--;
            coll--;
            i++;
            j++;
        }        
        return res;
    }
};

int main(){

vector<vector<int>>v={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};
Solution s;
vector<int>res=s.spiralOrder(v);
s.print(res);
}