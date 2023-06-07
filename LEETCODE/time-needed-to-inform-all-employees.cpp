#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class TreeNode {
    public:
    TreeNode*next;
    int val;
    
    TreeNode(TreeNode* next,int val){
        this->next=next;
        this->val=val;
    }

    TreeNode() {
        this->next=NULL;
        this->val=-1;
    }
};

class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>arr = buildTree(n,headID,manager);
        int ans = 0;
        dfs(arr,headID,informTime,n,ans,0);
        return ans;
    }

    int dfs(vector<vector<int>>&arr, int headId, vector<int>& informTime,int n, int &ans,int time){
        time+=informTime[headId];
        for(int i=0;i<arr[headId].size();i++){
            ans = max(ans,dfs(arr,arr[headId][i],informTime,n,ans,time));
        }
        return time;
    }

    vector<vector<int>> buildTree(int n, int headID, vector<int>& manager) {
        vector<vector<int>>arr(n);
        for(int j=0;j<manager.size();j++){
            if(manager[j]!=-1) arr[manager[j]].push_back(j);
        }
        print(arr);
        return arr;
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
    Solution s;
    vector<int>manager = {1,2,3,4,5,6,-1};
    vector<int>informTime = {0,6,5,4,3,2,1};
    cout<<s.numOfMinutes(7,6,manager,informTime)<<endl;

}