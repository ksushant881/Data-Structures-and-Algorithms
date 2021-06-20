#include<bits/stdc++.h>
using namespace std;

//recursive solution
class Solution1 {
public:
    void rec(vector<int>&v,int i,int j,int &alex,int &lee,bool flag){

    }
    bool stoneGame(vector<int>& piles) {
        int alex=0;
        int lee=0;
        rec(piles,0,piles.size()-1,alex,lee,true);
        return (alex > lee);
    }
};

//alex always wins but follow optimal strategy game 
class Solution {
public:
    bool stoneGame(vector<int>& v) {
        int n=v.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=v[i];
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n-1;i++){
            dp[i][i+1]=max(v[i],v[i+1]);
        }
        for(int gap=3;gap<n;gap+=2){
            for(int i=0;i<n-gap;i++){
                int j=gap+i;
                dp[i][j]=max(v[i]+min(dp[i+2][j],dp[i+1][j-1]),v[j]+min(dp[i][j-2],dp[i+1][j-1]));
            }
        }
        return sum-dp[0][n-1] < dp[0][n-1];
    }
};

int main(){
vector<int>v1={5,3,4,5};
Solution s;
cout<<s.stoneGame(v1);

}