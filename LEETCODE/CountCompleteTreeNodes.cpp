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
    int help(TreeNode*root,int cnt){
        if(root==NULL) return cnt;
        cnt = 1+help(root->left,0)+help(root->right,0);
        return cnt;
    }
    
    int countNodes(TreeNode* root) {
        int k=help(root,0);
        return k;
    }
};

int main(){

}