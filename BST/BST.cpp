#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

struct node{
    int key;
    node*right;
    node*left;

    node(int x){
        key=x;
        right=left=NULL;
    }
};

//searching in BST takes log(n) time complexity
//recursive solution
bool search(node*root,int x){
    if(root==NULL)
        return false;
    else if(root->key == x)
        return true;
    else if(root->key <x)
        return search(root->right,x);
    else 
        return search(root->left,x);
    
}

//iterative solution
bool search2(node*root,int x){

    while(root!=NULL){
    if(root->key==x)
        return true;
    else if(root->key > x)
        root=root->left;
    else if(root->key<x)
        root=root->right;
    }
    return false;
}


//insert in a BST
node *insert(node*root,int x){
    node *temp=new node(x);
    node *parent=NULL;
    node*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key >x)
            curr=curr->left;
        else if(curr->key <x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL){
        return temp;
    }
    if(parent->key > x){

    }  
}

//recursive insertion in BST

node *insert2(node*root,int x){
    if(root==NULL){
        return new node(x);
    }
    else if(root->key > x){
        root->left=insert2(root->left,x);
    }
    else if(root->key <x){
        root->right=insert2(root->right,x);
    }
    return root;
}

//deletion in BST
//recursive

//node*delete(node *root,int x){
    
//}

//floor of a give value from BST
node*floor(node*root,int x){
    node*res=NULL;
    while(root!=NULL){
        if(root->key == x){
            return root;

        }
        if(root->key > x){
            root=root->left;
        }
        else {
            res=root;
            root=root->right;
        }
    }
    return res;
}

//ceil of a value in BST
node*ceil(node*root,int x){
    node*res=NULL;
    while(root!=NULL){
        if(root->key == x)
            return root;
        else if(root->key < x){
            root=root->right;
        }
        else{
            res=root;
            root=root->left;
        }
    }
    return res;
}



int main(){
    node *root=new node(15);
    root->left=new node(5);
    root->right=new node(20);
    root->right->right= new node(80);
    root->left->left=new node(3);
    //cout<<search2(root,200)<<" "<<search2(root,20);
    //cout<<floor(root,10)->key<<" ";
    cout<<ceil(root,10)->key<<" ";
}
