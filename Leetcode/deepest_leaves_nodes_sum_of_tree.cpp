#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode*left,*right;
    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};

//did it using DFS
//can be done using BFS too
 void preorder(TreeNode*root,int level,map<int,int>&mp){
        if(root==NULL)
            return;
        mp[level]+=root->val;
        preorder(root->left,level+1,mp);
        preorder(root->right,level+1,mp);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        map<int,int>mp;
        preorder(root,0,mp);
        //cout<<mp[0]<<endl;
        return mp[mp.size()-1];
    }

int main(){

}