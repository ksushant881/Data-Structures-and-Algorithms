#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<vector<int>>transpose(vector<vector<int>>arr,int n){
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j] = arr[j][i];
            }
        }
        return ans;
    }
    
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>t = transpose(grid,n);
        // print(grid);
        // print(t);
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(compareArrays(grid[i],t[j],n)) res++;
            }
        }
        return res;
    }

    bool compareArrays(vector<int>arr1,vector<int>arr2,int n){
        for(int i=0;i<n;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }

    void print(vector<vector<int>>arr){
        for(auto x:arr){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    vector<vector<int>>arr = {{3,2,1},{1,7,6},{2,7,7}};
    Solution s;
    cout<<s.equalPairs(arr);
}