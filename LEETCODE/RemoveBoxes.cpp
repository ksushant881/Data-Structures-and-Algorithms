#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[100][100][100];
    //Here [i,j] describes the closed interval inside which we will make operations i.e finding 
    // some consecutive boxes of same colour and k is that count of same coloured consecutive 
    // boxes on the left side of boxes[i]
    int solve(vector<int>&v,int i,int j,int k){
        if(i>j) return 0;
        if(dp[i][j][k]!=0) return dp[i][j][k];
        int res=(k+1)*(k+1) + solve(v,i+1,j,0);
        for(int range=i+1;range<=j;range++){
            if(v[i] == v[range]){
                res=max(res,solve(v,i+1,range-1,0)+solve(v,range,j,k+1));
            }
        }
        return dp[i][j][k]=res;
    }

    int removeBoxes(vector<int>& boxes) {
        int n=boxes.size();
        memset(dp,0,sizeof(dp));
        return solve(boxes,0,n-1,0);
    }
};

int main(){
    Solution s;
    vector<int>v1={1,3,2,2,2,3,4,3,1};
    vector<int>v2={1,1,1};
    vector<int>v3={1};
    cout<<s.removeBoxes(v1)<<endl;
    cout<<s.removeBoxes(v2)<<endl;
    cout<<s.removeBoxes(v3)<<endl;
}