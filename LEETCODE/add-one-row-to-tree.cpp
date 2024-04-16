#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)


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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newLeftNode = new TreeNode(val, root, NULL);
            root = newLeftNode;
        } else {
            solve(root, val, depth, 1);
        }
        return root;
    }
    
    void solve(TreeNode* root, int val, int depth, int curr){
        if(root == NULL) return;
        if(curr == depth-1){
            replace(root,val);
        } else {
            solve(root->left, val, depth, curr+1);
            solve(root->right, val, depth, curr+1);
        }
    }
    
    void replace(TreeNode*node, int val){
        TreeNode* newLeftNode = new TreeNode(val, node->left,NULL);
        TreeNode* newRightNode = new TreeNode(val, NULL, node->right);
        node->left = newLeftNode;
        node->right = newRightNode;
    }
};

int main(){

}