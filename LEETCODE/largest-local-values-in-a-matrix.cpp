#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

void print(vector<vector<int>>arr){
    for(auto x:arr){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int mx = INT_MIN;
                for(int k=i;k<i+3;k++){
                    for(int m=j;m<j+3;m++){
                        mx=max(mx,grid[k][m]);
                    }
                }
                ans[i][j] = mx;
            }
        } 
        return ans;
    }
};



int main(){
    Solution s;
    vector<vector<int>>arr={
        {20,8,20,6,16,16,7,16,8,10},
        {12,15,13,10,20,9,6,18,17,6},
        {12,4,10,13,20,11,15,5,17,1},
        {7,10,14,14,16,5,1,7,3,11},
        {16,2,9,15,9,8,6,1,7,15},
        {18,15,18,8,12,17,19,7,7,8},
        {19,11,15,16,1,3,7,4,7,11},
        {11,6,5,14,12,18,3,20,14,6},
        {4,4,19,6,17,12,8,8,18,8},
        {19,15,14,11,11,13,12,6,16,19}
    };

    print(s.largestLocal(arr));
}