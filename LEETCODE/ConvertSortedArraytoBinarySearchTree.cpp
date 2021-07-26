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
    void buildTree(vector<int>nums,int first,int last,TreeNode*root){
        
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        TreeNode*root=new TreeNode((n-1)/2);
        root->left = 
    }
};

int main(){

}