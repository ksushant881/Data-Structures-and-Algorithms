#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

void fill_map(Node*root,map<int,int>&mp,int hIndex){
    if(root!=NULL){
        
        fill_map(root->left,mp,hIndex-1);
        mp[hIndex]+=root->data;
        fill_map(root->right,mp,hIndex+1);
    }
    
}

void inorder(Node*root){
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

vector<int> vertical_sum(Node*root,map<int,int>&mp,vector<int>&v){
    fill_map(root,mp,0);
    for(auto x:mp){
        //cout<<x.second<<" ";
        v.push_back(x.second);
    }
    return v;
}

int main(){
    Node*root=new Node(10);
    root->left=new Node(15);
    root->right=new Node(25);
    root->left->left=new Node(35);
    root->left->right=new Node(20);
    root->left->left->left=new Node(40);
    root->left->right->right=new Node(75);
    root->left->right->right->right=new Node(80);
    //inorder(root);
    
    vector<int>v;
    map<int,int>mp;
    v=vertical_sum(root,mp,v);
    for(int x:v)
        cout<<x<<" ";

}