#include<bits/stdc++.h>
using namespace std;

//always win strategy
//but it does not ensure to get the maximum value always
int sum(int arr[],int n){
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(i%2 == 0)
            odd+=arr[i];
        else
            even+=arr[i];
    }
    if(odd > even){
        cout<<"Pick coins at odd locations..!!";
    }
    else
        cout<<"Pick coins at even locations..!!";
}

//recursive solution but cannot be coverted to dp solution
class Solution {
public:

    int solve(vector<int>&v,int i,int j,int sum){  //20 5 4 6
        if(i+1 == j) return max(v[i],v[j]);
        return max(sum-solve(v,i+1,j,sum-v[i]),sum-solve(v,i,j-1,sum-v[j]));
    }

    int strategy(vector<int>& v) {
        int n=v.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=v[i];
        return solve(v,0,n-1,sum);
    }
};


//recursive solution
class Solution2 {
public:
    int rec(vector<int>&v,int i,int j){
        if(i+1 == j) return max(v[i],v[j]);
        return max(v[i]+min(rec(v,i+2,j),rec(v,i+1,j-1)),v[j]+min(rec(v,i,j-2),rec(v,i+1,j-1)));
    }

    int strategy(vector<int>& v) {
        int n=v.size();
        return rec(v,0,n-1);
    }
};

//dp solution
class Solution3 {
public:
    void print(vector<vector<int>>v){
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    int strategy(vector<int>& v) {
        int n=v.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n-1;i++){
            dp[i][i+1]=max(v[i],v[i+1]);
        }
        for(int gap=3;gap<n;gap+=2){
            for(int i=0;i<n-gap;i++){
                int j=i+gap;
                dp[i][j]=max(v[i]+min(dp[i+2][j],dp[i+1][j-1]),v[j]+min(dp[i+1][j-1],dp[i][j-2]));
            }
        }
        print(dp);
        return dp[0][n-1];
    }
};

int main(){
    vector<int>v1={20,5,4,6}; //25
    vector<int>v2={2,3,15,7};
    vector<int>v3={2,7,9,4,4}; //10
    Solution3 s;
    cout<<s.strategy(v1);
}