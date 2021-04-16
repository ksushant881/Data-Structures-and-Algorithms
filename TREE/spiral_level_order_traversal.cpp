#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

};

class TreeNode{
    public:
    int val;
    Node*left;
    Node*right;

};
//method1 by using level order traversal and stack
//this is not efficient because some nodes are going in queue then coming out then going i stack then getting printed
void spiral(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    stack<Node*>st;
    bool alt=false;
    while(q.empty()==false){
        int num=q.size();
        
        for(int i=0;i<num;i++){
            Node*curr=q.front();
            q.pop();
            if(alt){
                st.push(curr->data);
            }
            else{
            cout<<(curr->data)<<" ";
            }
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        
        if(alt){
            while(st.empty()==false){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        alt=!alt;
        cout<<endl;
    }
}

//method 2 by using two stacks

void spiral(Node*root){
    stack<Node*>st1;
    stack<Node*>st2;
    if(root==NULL){
        return;
    }
    st1.push(root);
    while(st1.empty()==false || st2.empty()==false){
        while(st1.empty()==false){
            Node*temp=st1.top();
            st1.pop();
            cout<<(temp->data)<<" ";
            if(temp->right!=NULL)
                st2.push(temp->right);
            if(temp->left!=NULL)
                st2.push(temp->left);  
        }
        while(st2.empty()==false){
            Node*temp=st2.top();
            st2.pop();
            cout<<(temp->data)<<" ";
            if(temp->left!=NULL)
                st1.push(temp->left);
            if(temp->right!=NULL)
                st1.push(temp->right);  
        }


}
}

    //my leetcode submission
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        st1.push(root);
        
        while(!st1.empty() || !st2.empty()){
            vector<int>vv;
            while(!st1.empty()){
                TreeNode*curr=st1.top();
                
                vv.push_back(curr->val);
                st1.pop();
                if(curr->left!=NULL)
                    st2.push(curr->left);
                if(curr->right!=NULL)
                    st2.push(curr->right);
            }
            v.push_back(vv);
            vv.clear();
            while(!st2.empty()){
                TreeNode*curr=st2.top();
                
                vv.push_back(curr->val);
                st2.pop();
                if(curr->right!=NULL)
                    st1.push(curr->right);
                if(curr->left!=NULL)
                    st1.push(curr->left);
            }
            if(!vv.empty())
            v.push_back(vv);
        }
        return v;
    }