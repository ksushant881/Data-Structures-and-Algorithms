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
    void solve(TreeNode*root,bool isLeft,int &sum){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL && isLeft==1){
            sum+=root->val;
            return;
        }
        solve(root->right,0,sum);
        solve(root->left,1,sum);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=0;
        solve(root,0,ans);
        return ans;
    }
};

int main(){

}