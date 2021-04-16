#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*left;
        Node*right;
};

void inOrder(Node*root){
    if(root==NULL)
        return;
    stack<Node*>st;
    Node*curr=root;
    
    while(st.empty()==false || curr!=NULL){
        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        cout<<(curr->data)<<" ";
        curr=curr->right;
    }
}