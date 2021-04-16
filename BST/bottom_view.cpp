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

void bottomView(Node*root){
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        Node*curr=p.first;
        int index=p.second;
        q.pop();
        mp[index]=curr->data;
        if(curr->left!=NULL)
            q.push({curr->left,index-1});
        if(curr->right!=NULL)
            q.push({curr->right,index+1});
    }
    for(auto x: mp)
        cout<<x.second<<" ";


}

int main(){
    Node*root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    
    bottomView(root);
}