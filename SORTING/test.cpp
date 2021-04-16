#include<bits/stdc++.h>
using namespace std;

 bool cmp(vector<int>a,vector<int>b){
        if(a[0]>b[0])
            return false;
        return true;       
    }
    void maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
            stable_sort(points.begin(),points.end(),cmp);
            for(int i=0;i<n;i++){
                cout<<points[i][0]<<" "<<points[i][1]<<endl;
            }  
    }

int main(){
    vector<vector<int>>v;
    v= {{3,1},{9,0},{1,0},{1,4},{5,3},{10,8}};
    maxWidthOfVerticalArea(v);
}