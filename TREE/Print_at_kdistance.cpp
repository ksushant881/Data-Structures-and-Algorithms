#include<iostream>
using namespace std;

class Node{


    
};

void k_distance(Node*root,int k){
    if(root==NULL)
    return;
    if(k==0)
    cout<<(root->data)<<" ";
    else{
        k_distance(root->left,k-1);
        k_distance(root->right,k-1);
    }
}