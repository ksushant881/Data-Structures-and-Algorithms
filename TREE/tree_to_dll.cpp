#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*left;
        Node*right;
};
Node*prev=NULL;
Node*tree2dll(Node*root){
    if(root==NULL){
        return root;
    }
    Node* head=tree2dll(root->left);
    if(prev==NULL)
        head=root;
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    
    tree2dll(root->right);
    return head;
}