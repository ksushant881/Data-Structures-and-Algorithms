#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*left;
        Node*right;
};

void preOrder(Node*root){
    if(root==NULL)
        return;
    stack<Node*>st;
    Node*curr=root;
    st.push(curr);
    while(st.empty()==false){
        curr=st.top();
        cout<<(curr->data)<<" ";
        st.pop();
        if(curr->right!=NULL)
            st.push(curr->right);
        if(curr->left!=NULL)
            st.push(curr->left);
    }
}

//space efficient preorder traversal
void preOrder(Node*root){
    Node*curr=root;
    stack<Node*>st;
    st.push(root);
    while(st.empty()==false || curr!=NULL){
        while(curr!=NULL){
            cout<<(curr->data)<<" ";
            if(curr->right!=NULL)
                st.push(curr->right);
            curr=curr->left;
        }
        if(st.empty()==false){
        curr=st.top();
        st.pop();

        }
    }
}

