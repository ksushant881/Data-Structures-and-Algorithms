#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int val;
    Node *left;
    Node *right;
    Node(int k){ //constructor of this node
        val=k;
        left=right=NULL; //while creating a node both pointers are null
    }
};

vector<int> rightSideView(Node* root) {
        vector<int>v;
        if(root==NULL)
            return v;
        queue<Node*>q;
        q.push(root);
        
     
        while(q.empty()==false){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node*curr=q.front();
                q.pop();
                if(i==n-1)
                    v.push_back(curr->val);
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
            }
            
        }
        return v;
    }

int main(){
     Node *root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    root->right->right=new Node(70);
    root->right->right->left=new Node(80);
    root->right->right->right=new Node(90);
    vector<int>v;
    v=rightSideView(root);
    for(int x:v)
        cout<<x<<" ";
}