#include<iostream>
#include<vector>
using namespace std;
const int EMPTY=-1;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int k){
        data=k;
        left=NULL;
        right=NULL;
    }
};

void serial(Node*root,vector<int>&v){
    if(root==NULL){
        v.push_back(EMPTY);
        return ;
    }
    v.push_back(root->data);
    serial(root->left,v);
    serial(root->right,v);
}
int index=0;

Node* deserial(vector<int>&v){
    if(v.size()==index)
        return NULL;
    int val=v[index];
    index++;
    if(val==EMPTY)
        return NULL;
    Node*root=new Node(val);
    root->left=deserial(v);
    root->right=deserial(v);
    return root;
}