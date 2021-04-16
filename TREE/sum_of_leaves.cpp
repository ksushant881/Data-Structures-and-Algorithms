#include<bits/stdc++.h>
using namespace std;

//DFS approach
    int height(TreeNode*root){
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    int summ(TreeNode*root,int h,int sum){
        if(root==NULL)
            return 0;
        if(h==1)
            return root->val;
        sum+=summ(root->left,h-1,sum)+summ(root->right,h-1,sum);
        return sum;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int h=height(root);
        int sum=0;
        sum=summ(root,h,sum);
        return sum;
    }

//BFS approach


int main(){

}