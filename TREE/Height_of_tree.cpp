#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int k){
        data=k;
        left=right=NULL;
    }



};
class Tree{
    public:
    Node *root;

};

int height(Node *root){
    
    if(root==0){
        return 0; 
    }
    return max(height(root->left),height(root->right))+1;
}
