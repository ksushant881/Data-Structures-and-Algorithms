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
    int preIndex=0;
    TreeNode*help(vector<int>&preorder,vector<int>&inorder,int first,int last){
        if(first>last) return NULL;
        TreeNode*root = new TreeNode(preorder[preIndex++]);
        int inIndex;
        for(int i=first;i<last;i++){
            if(inorder[i] == root->val){
                inIndex = i;
                break;
            }
        }
        root->left=help(preorder,inorder,first,inIndex-1);
        root->right=help(preorder,inorder,inIndex+1,last);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        return help(preorder,inorder,0,n);
    }
};

void print(TreeNode*root){

}

int main(){

vector<int>pre1={3,9,20,15,7};
vector<int>post1={9,3,15,20,7};
vector<int>pre2={-1};
vector<int>post2={-1};
Solution s;
TreeNode*res1=s.buildTree(pre1,post2);
TreeNode*res2=s.buildTree(pre2,post2);
print(res1);
print(res2);

}