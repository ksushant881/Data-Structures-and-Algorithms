#include<iostream>
using namespace std;

class Node{
    int data;
    Node*left;
    Node*right;
};

bool chidrenSumP(Node*root){
    if(root)==NULL  return true;
    if(root->left==NULL && root->right==NULL) return true;
    int sum=0;
    if(root->left!=NULL)
        sum+=root->left->data;
    if(root->right!=NULL)
        sum+=root->right->data;
    return (root->data==sum && childrenSumP(root->left) && childrenSumP(root->right));
}