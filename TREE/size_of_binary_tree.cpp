#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
};

int sizeoftree(Node*root){
    if(root==NULL)
        return 0;
    else
        return 1+sizeoftree(root->left)+sizeoftree(root->right);
    

}