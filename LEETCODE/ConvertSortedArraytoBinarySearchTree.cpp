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

class Solution {
public:
    TreeNode* buildTree(vector<int>nums,int first,int last){
        if(first>last) return NULL;
        int i=first+(last-first)/2;
        int r=nums[(last-first)/2 + first];
        TreeNode*root = new TreeNode(r);
        root->left=buildTree(nums,first,i-1);
        root->right=buildTree(nums,i+1,last);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return buildTree(nums,0,n-1);
    }
};

int main(){

}