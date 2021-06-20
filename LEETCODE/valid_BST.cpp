#include<bits/stdc++.h>
using namespace std;

    class TreeNode{
        public:
        int val;
        TreeNode*left,*right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

        
    };

    //o(n^2) solution
    //not efficient
    int findMax(TreeNode*root){
    if(root==NULL)
        return INT_MIN;
    return max({root->val,findMax(root->left),findMax(root->right)});
}

int findMin(TreeNode*root){
    if(root==NULL)
        return INT_MAX;
    return min({root->val,findMin(root->left),findMin(root->right)});
}

bool isValidBST(TreeNode*root){
    if(root==NULL)
        return true;
    if((root->left!=NULL && root->val <= findMax(root->left)) || (root->right!=NULL && root->val >= findMin(root->right)))
        return false;
    if(isValidBST(root->left) == false || isValidBST(root->right) == false)
        return false;
    return true;
    
}

//better solution
bool help(TreeNode*root,long lower,long higher){
    if(root==NULL)
        return true;
    if(root->val >= higher || root->val <= lower)
        return false;
    return (help(root->left,lower,root->val) && help(root->right,root->val,higher));
}
bool isValidBST(TreeNode*root){
    return help(root,INT64_MIN,INT64_MAX);
}

//approach3
    bool help(TreeNode*root,int prev){
    if(root==NULL)
        return true;
    if(help(root->left,prev)==false)
        return false;
    if(root->val <= prev)
        return false;
    prev=root->val;
    return help(root->right,prev);
    
}
    bool isValidBST(TreeNode* root) {
        int prev=INT_MIN;
        return help(root,prev);
        
    }

int main(){

}