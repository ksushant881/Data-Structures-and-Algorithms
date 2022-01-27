#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution1 {
public:
    void inorder(TreeNode*root,vector<int>&arr){
        if(root!=NULL){
            inorder(root->left,arr);
            arr.push_back(root->val);
            inorder(root->right,arr);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        inorder(root1,v1);
        inorder(root2,v1);
        vector<int>res=v1;
        sort(res.begin(),res.end());
        return res;
    }
};

class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*>st1,st2;
        vector<int>ans;
        while(root1!=NULL || root2!=nullptr || !st1.empty() || !st2.empty()){
            while(root1!=nullptr){
                st1.push(root1);
                root1=root1->left;
            }
            while(root2!=nullptr){
                st2.push(root2);
                root2=root2->left;
            }
            if(st2.empty() || (!st1.empty() && (st1.top()->val <= st2.top()->val))){
                root1=st1.top();
                ans.push_back(root1->val);
                st1.pop();
                root1=root1->right;
            }
            else{
                root2=st2.top();
                ans.push_back(root2->val);
                st2.pop();
                root2=root2->right;
            }
        }
        return ans;
    }
};


int main(){

}