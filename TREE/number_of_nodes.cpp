#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

};
//this will work on every tree O(n) solution
int nodes(Node*root){
    if(root==NULL)
        return 0;
    return 1+nodes(root->left)+nodes(root->right);
}

//efficient O(logn*logn) solution for complete binary tree
int nodes(Node*root){
    int lh=0,rh=0;
    Node*curr=root;
    while(curr!=NULL){
        lh++;
        curr=curr->left;
        
    }
    curr=root;
    while(curr!=NULL){
        rh++;
        curr=curr->right;
        
    }
    if(lh==rh){
        return pow(2,lh)-1;
    }
    return 1+nodes(root->left)+nodes(root->right);


}