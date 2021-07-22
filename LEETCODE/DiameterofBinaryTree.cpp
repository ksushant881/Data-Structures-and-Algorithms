#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


//leetcode definition of diameter does not include the current node so its bit different
class Solution {
public:
    int height(TreeNode*root){
        if(root == NULL)
            return 0;
        else
            return 1+max(height(root->left),height(root->right));

    }   
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int d1 = height(root->left)+height(root->right);
        int d2 = diameterOfBinaryTree(root->left);
        int d3=  diameterOfBinaryTree(root->right);
        return max(d1,max(d2,d3));
        // int lh = height(root->right);
        // int rh = height(root->left);
        // return max(1+lh+rh,max(diameterOfBinaryTree(root->right),diameterOfBinaryTree(root->left)));
    }
};

class Solution {
public:
    int res = 0;
    int diameter3(TreeNode*root){
        if(root==NULL) return 0;
        int lh = diameter3(root->left);
        int rh = diameter3(root->right);
        res = max(res,lh+rh);
        return 1+max(rh,lh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diameter3(root);
        return res;
    }
};

int main(){

}