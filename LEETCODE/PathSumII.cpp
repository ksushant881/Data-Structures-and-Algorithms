#include<bits/stdc++.h>
using namespace std;
 
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 

//recursive solution
class Solution {
public:
    void help(TreeNode*root,int target,int curr,vector<int>currentPath,vector<vector<int>>&res){
        if(root==NULL) return;
        
        if(root->left == NULL && root->right == NULL && curr+(root->val) == target){
            curr+=(root->val);
            currentPath.push_back(root->val);
            res.push_back(currentPath);
            return;
        }
        curr+=(root->val);
        currentPath.push_back(root->val);
        //cout<<curr<<" here"<<endl;
        help(root->left,target,curr,currentPath,res);
        help(root->right,target,curr,currentPath,res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>temp;
        int curr=0;
        help(root,targetSum,curr,temp,res);
        return res;
    }
};

void print(vector<vector<int>>res){
    for(auto x:res){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

int main(){

TreeNode*root=new TreeNode(-2);;
root->left=NULL;
root->right=new TreeNode(-3);
Solution s;
vector<vector<int>>res = s.pathSum(root,-5);
print(res);
}