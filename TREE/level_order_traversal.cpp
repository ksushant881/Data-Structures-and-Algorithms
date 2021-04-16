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

int height(Node*root){
    if(root==NULL){
        return 0;

    }
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

void k_distance(Node *root,int k){
    if(root==NULL)return;
    if(k==0) cout<<(root->data)<<" ";
    else{
        k_distance(root->left,k-1);
        k_distance(root->right,k-1);
    }
}

void using_queue(Node*root){
    queue<Node*>q;
    if(root==NULL){
        return;
    }
    q.push(root);
    while(q.empty()==false){
        Node*curr=q.front();
        cout<<(curr->data)<<" ";
        q.pop();
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}
//1 method by using height and priting values on every level
//method 2 by using queue

int main(){
     Node *root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    root->right->right=new Node(70);
    root->right->right->left=new Node(80);
    root->right->right->right=new Node(90);
    int h=height(root);
    // for(int i=0;i<h;i++){
    //     k_distance(root,i);
    // }
    using_queue(root);
}

