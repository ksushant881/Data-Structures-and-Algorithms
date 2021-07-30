#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

/*
complete binary tree has only last level partially filled and that too from left to right
any other level cannot be partially filled
if we are level 3 then tree already have 2^2 - 1 nodes and on third level nodes are form
left to right not anywhere skipping spaces
*/

//naive O(n) solution
int countNodes1(Node*root){
    if(root == NULL) return 0;
    return 1+countNodes1(root->left)+countNodes1(root->right); 
}

//efficient logn*logn solution
int leftHeight(Node*root){
    int h = 0;
    while(root!=NULL){
        h++;
        root = root->left;
    }
    return h;
}

int rightHeight(Node*root){
    int h = 0;
    while(root!=NULL){
        h++;
        root = root->right;
    }
    return h;
}

int countNodes2(Node*root){
    if(root == NULL) return 0;
    if(leftHeight(root) == rightHeight(root)){
        return (1<<leftHeight(root)) - 1;
    }
    return 1 + countNodes2(root->left) + countNodes2(root->right);
}

int main(){

}