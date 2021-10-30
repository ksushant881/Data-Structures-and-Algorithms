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
    map<int,int>mp;
    
    int helper(TreeNode*root,int target,int runningSum){
        if(root == NULL) return 0;
        runningSum+=root->val;
        int count = 1;
        if(mp.count(target-runningSum)) count = mp[runningSum-target];
        mp[runningSum]++;
        count+=(helper(root->left,target,runningSum)+helper(root->right,target,runningSum));
        mp[runningSum]--;
        if(mp[runningSum]==0) mp.erase(runningSum);
        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        int runningSum=0;
        mp[0]=1;
        return helper(root,targetSum,runningSum);
    }
};


class Solution2 {
public:
    int getCountOfPaths(TreeNode*root,int target){
        if(root == NULL) return 0;
        int count=0;
        if(root->val == target) count++;
        int newSum = target - root->val;
        count+=getCountOfPaths(root->left,newSum);
        count+=getCountOfPaths(root->right,newSum);
        return count;
    }
    
    int helper(TreeNode*root,int targetSum){
        int a=helper(root->left,targetSum);
        int b=helper(root->right,targetSum);
        return getCountOfPaths(root,targetSum);
    }

    int pathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum);
    }
};

int main(){

}