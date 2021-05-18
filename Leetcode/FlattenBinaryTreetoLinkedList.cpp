#include<bits/stdc++.h>
using namespace std;


class TreeNode{
    public:
    char val;
    TreeNode*left,*right;
    TreeNode(char x){
        val=x;
        left=NULL;
        right=NULL;
    }
};

class ListNode{
    public:
        TreeNode* data;
        ListNode*next;
        ListNode(TreeNode* x){
            data=x;
            next=NULL;
        }
};

void preorder(TreeNode*root,vector<TreeNode*>&v){
    if(root!=NULL)
    {
        v.push_back(root);
        preorder(root->left,v);
        preorder(root->right,v);
    }
}

void flatten1(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)) return;
        vector<TreeNode*>v;
        preorder(root,v);
        for(int i=0;i<v.size()-1;i++){
            v[i]->left=NULL;
            v[i]->right=v[i+1];
        }
        v[v.size()-1]->right=NULL;
        root=v[0];
}

void print(TreeNode*root){
    if(root!=NULL){
        cout<<root->val<<" ";
        print(root->left);
        print(root->right);
    }
}

//recursive solution
class Solution {
public:
    TreeNode*prev=NULL;
    void flatten2(TreeNode* root) {
        if(root==NULL) return;
        flatten2(root->right);
        flatten2(root->left);
        root->left=NULL;
        root->right=prev;
        prev=root;
    }
};


int main(){
    TreeNode *root=new TreeNode('A');
    root->left=new TreeNode('B');
    root->left->left=new TreeNode('C');
    root->left->right=new TreeNode('D');
    root->right=new TreeNode('E');
    root->right->right=new TreeNode('F');
    root->right->right->left=new TreeNode('G');

    print(root);
    cout<<endl;
    Solution s;
    s.flatten2(root);
    print(root);
    cout<<endl;


}