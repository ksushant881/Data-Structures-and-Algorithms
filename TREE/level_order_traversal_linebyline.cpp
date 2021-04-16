#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
};
//solution 1 by using queue and a indentifier marker as null in the queue
void linebyline1(Node*root){
    if(root==NULL)
        return;

    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node*curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<"\n";
            q.push(NULL);
            continue;

        }
        cout<<(curr->data)<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        

    }
}
//cool solution using 2 loops
void linebyline2(Node*root){
    if(root==NULL)
    return;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
            Node*curr=q.front();
            q.pop();
            cout<<(curr->data)<<" ";
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(curr->right);
        }
        cout<<"\n";
    }
}
























