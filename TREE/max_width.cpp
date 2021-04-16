#include<iostream>
using namespace std;

class Node{
    int data;
    Node*left;
    Node*right;
};

int width(Node*root){
    int max=0;
    if(root==NULL)
        return 0;
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        int num=q.size();
        if(num>max)
            max=num;
        for(int i=0;i<num;i++){
            Node*curr=q.front();
            q.pop();
            
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
    return max;
}