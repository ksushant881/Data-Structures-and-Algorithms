#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
};

int height(Node*root){
    if(root==NULL)
        return 0;
    else
        return 1+max(height(root->left),height(root->right));
    
}

int diameter(Node*root){
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+lh+rh;
}