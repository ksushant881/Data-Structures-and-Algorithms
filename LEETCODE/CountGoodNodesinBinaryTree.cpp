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

class Solution {
public:
    int c=0;
    void help(TreeNode*root,int val){
        if(root==NULL) return;
        if(root->val >= val) c++;
        help(root->left,max(val,root->val));
        help(root->right,max(val,root->val));
    }
    
    int goodNodes(TreeNode* root) {
        help(root,root->val);
        return c;
    }
};

int main(){

}