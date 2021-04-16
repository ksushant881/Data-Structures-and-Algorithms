#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

class TreeNode{
    public:
    int val;
    TreeNode*left,*right;
    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};

//wrong approach to check if BST
//fails for this case
/*
        20
       /  \
      8    30
           / \
          18  35
*/
bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        else if((root->left == NULL && root->right!=NULL && root->right->val > root->val) || (root->right == NULL && root->left!=NULL && root->left->val < root->val) || (root->left == NULL && root->right == NULL))
            return true;
        else if(root->val > root->left->val && root->right->val  > root->val)
            return true;
        else 
            return false;
        return (isValidBST(root->left) && isValidBST(root->right));
    }

//approach 1
/*
1. find max in left subtree
2. find max in right subtee
3. check if max in left subtree < root value < min in right subtree
*/
int findMax(Node*root){
    if(root==NULL)
        return INT_MIN;
    return max({root->data,findMax(root->left),findMax(root->right)});
}

int findMin(Node*root){
    if(root==NULL)
        return INT_MAX;
    return min({root->data,findMin(root->left),findMin(root->right)});
}

bool validBST(Node*root){
    if(root==NULL)
        return true;
    int left=findMax(root->left);
    int right=findMin(root->right);
    if(root->data < left || root->data > right)
        return false;
    return validBST(root->left) && validBST(root->right);
    
}

//approach 2
bool help(Node*root,int lower,int higher){
    if(root==NULL)
        return true;
    if(root->data > higher || root->data < lower)
        return false;
    return (help(root->left,lower,root->data) && help(root->right,root->data,higher));
}
bool isValidBST(Node*root){
    return help(root,INT_MIN,INT_MAX);
}

//approach 3
int prev=INT_MIN;
bool isValidBST3(Node*root,int prev){
    if(root==NULL)
        return true;
    if(isValidBST3(root->left,prev)==false)
        return false;
    if(root->data <= prev)
        return false;
    prev=root->data;
    return isValidBST3(root->right,prev);
    
}



int main(){
    Node*root=new Node(200);
    root->left=new Node(15);
    root->right=new Node(25);
    root->left->left=new Node(35);
    root->left->right=new Node(-200);
    root->left->left->left=new Node(40);
    root->left->right->right=new Node(75);
    root->left->right->right->right=new Node(80);
    cout<<isValidBST(root);
}