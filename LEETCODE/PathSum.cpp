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
    bool solve(TreeNode*root,int targetSum,int currSum){
        if(root == NULL) return false;
        if(currSum + root->val == targetSum and root->left == NULL and root->right == NULL) return true;
        
        bool ans = false;
        ans = ans or solve(root->left,targetSum,currSum+root->val) or solve(root->right,targetSum,currSum+root->val);
        
        return ans;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,targetSum,0);
    }
};
int main(){

}