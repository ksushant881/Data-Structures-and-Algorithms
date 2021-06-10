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
    void help(TreeNode*root,vector<string>&v,string s){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            s+=to_string(root->val);
            v.push_back(s);
            return;
        }
        
        s+=to_string(root->val);
        s+="->";
        help(root->left,v,s);
        help(root->right,v,s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string s="";
        help(root,v,s);
        return v;
    }
};

int main(){

}