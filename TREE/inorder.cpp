#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int k){
        data=k;
        left=right=NULL;
    }

    //recusive solution
    void inorder(Node*root){
        if(root!=NULL){
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
    }
    
};

//iterative solution
vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>v;
       
        while(root || st.empty()==false){
            while(root){
                st.push(root);
                root=root->left;
            }
            
            root=st.top();
            st.pop();
            v.push_back(root->val);
            root=root->right;
            
        }
        return v;
        
    }


int main(){
    //Node root(10);
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    inorder(root);
}
