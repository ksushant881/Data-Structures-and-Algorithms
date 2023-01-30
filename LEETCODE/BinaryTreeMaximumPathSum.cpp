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
    int dp(TreeNode* root, int &res){
        if(root == NULL){
            return 0;
        }
        int leftSum = dp(root->left, res);
        int rightSum = dp(root->right, res);
        
        int pathSum = max(root->val + max(leftSum, rightSum), root->val);
        int totalSum = max(pathSum, root->val + leftSum + rightSum);
        res = max(res, totalSum);
        return pathSum;
    }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        dp(root, res);
        return res;
    }
};

int main(){
    
}