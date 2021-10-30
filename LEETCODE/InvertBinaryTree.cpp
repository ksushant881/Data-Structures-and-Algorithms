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

class Solution1 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root!=NULL){
            TreeNode*left = root->left;
            TreeNode*right = root->right;
            root->left = invertTree(right);
            root->right = invertTree(left);
            return root;
        }
    }
};

class Solution2 {
public:
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*>q;
        if(root == NULL || (root->left == NULL && root -> right == NULL)) 
            return root;
        q.push(root);
        while(!q.empty()){
            TreeNode*curr = q.front();
            TreeNode*temp = curr->left;
            curr->left = curr->right;
            curr->right = temp;
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        return root;
    }
};
int main(){

}