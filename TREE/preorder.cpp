#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node *right;
    Node(int k){
        data=k;
        left=NULL;
        right=NULL;
    }
    void preorder(Node*root){
        if(root!=NULL){
            cout<<(root->data)<<" ";
            preorder(root->left);
            preorder(root->right);
        }
    }

};

