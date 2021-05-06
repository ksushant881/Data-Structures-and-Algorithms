#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
struct TreeNode {
      int val;
    TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

    int depth(TreeNode*root){
        if(root==NULL) return 0;
        int l=depth(root->left)+1;
        int r=depth(root->right)+1;
        return l>r?l:r;
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==NULL)
            return NULL;
        int l=depth(root->left);
        int r=depth(root->right);
        if(l==r)
            return root;
        return l>r?lcaDeepestLeaves(root->left):lcaDeepestLeaves(root->right);
    }

int main(){
fastio

}