#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

//O(n^2) solution using height function
//the base condition is kind of confusing
//balanced tree is when any root's subtree's heights difference is less than 2

int height(Node*root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

bool isbalanced(Node*root){
    if(root==NULL)
        return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return (abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right));
}



//O(n) solution
int isbalanced2(Node*root){
    if(root==NULL)
        return 0;
    int lh=isbalanced(root->left);
    if(lh==-1)
        return -1;
    int rh=isbalanced(root->right);
    if(rh==-1)
        return -1;
    if(abs(lh-rh)>1)
        return -1;
    else   
        return max(lh,rh)+1;
}

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    root->right->right=new Node(70);
    root->right->right->left=new Node(80);
    root->right->right->right=new Node(90);
    cout << isbalanced2(root);
}