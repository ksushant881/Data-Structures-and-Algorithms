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
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->left=NULL;
        root->right=prev;
        prev=root;
    }
};

//using stack
class Solution2 {
public:
    stack<TreeNode*>st;
    void preorder(TreeNode*root){
        if(root!=NULL){
            st.push(root);
            preorder(root->left);
            preorder(root->right);
        }
    }
    void flatten(TreeNode* root) {
        TreeNode*prev=NULL;
        while(!st.empty()){
            TreeNode* curr = st.top();
            curr->right=prev;
            curr->left=NULL;
            prev=curr;
            st.pop();
        }
    }
};

//O(1) space iterative solution
class Solution3 {
public:
    TreeNode*curr;
    void flatten(TreeNode* root) {
        curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode*prev=curr->left;
                while(prev->right){
                    prev=prev->right;
                }
                prev->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
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
    Solution3 s;
    s.flatten(root);
    print(root);
    cout<<endl;


}