#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode*left,*right;
    TreeNode(int x){
        data=x;
        left=right=NULL;
    }
};

int getSum(TreeNode*root , TreeNode*parent, TreeNode*grandParent,int &s){
    if(root!=NULL){
        getSum(root->left,root,parent,s);
        if(grandParent!=NULL)
            s+=root->data;
        getSum(root->right,root,parent,s);
    }
}

int main(){
    TreeNode* root = new TreeNode(22);
 
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
 
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(8);
 
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(9);
    root->right->right->right = new TreeNode(2);
 
    int sum = 0;
    getSum(root, NULL, NULL, sum);
    cout << sum << '\n';
}