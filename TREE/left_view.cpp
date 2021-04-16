#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
};
int maxLevel=0;
void leftView(Node*root,int level){

    if(root==NULL){
        return;
    }
    if(maxLevel<level){
        cout<<(root->data)<<" ";
        maxLevel=level;
    }
    leftView(root->left,level+1);
    leftView(root->right,level+1);
}

//level order traversal method
void leftView(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root->data);
    while(q.empty()!=false){
        int number=q.size();
        for (int i=0;i<number;i++){
            Node*curr=q.front();
            q.pop();
            if(i==0)                                //thing happened here cool stuff
            cout<<(curr->data)<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
}