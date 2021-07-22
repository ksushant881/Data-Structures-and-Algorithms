#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


int height(Node*root){
    if(root == NULL)
        return 0;
    else
        return 1+max(height(root->left),height(root->right));
    
}

//naive approach
//n^2 time n space
int diameter1(Node*root){
    if(root == NULL) return 0;
    // int d1 = 1+height(root->left)+height(root->right);
    // int d2 = diameter1(root->left);
    // int d3=  diameter1(root->right);
    int lh = height(root->right);
    int rh = height(root->left);
    return max(1+lh+rh,max(diameter1(root->right),diameter1(root->left)));
}

//second approach n time n space
void fillMap(map<Node*,int>&mp,Node*root){
    if(root == NULL){
        mp[root] = 0;
    }
    mp[root] = 1 + max(fill)
}
int diameter2(Node*root){
    map<int,int>mp;

}

//third solution
//n time
//normal height function modified a bit
//the answer that is the diameter is stored in res variable
class Solution{
    public:
    int res = 0;
    int diameter3(Node*root){
        if(root==NULL) return 0;
        int lh = diameter3(root->left);
        int rh = diameter3(root->right);
        res = max(res,1+lh+rh);
        return 1+max(rh,lh);
    }
};

int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    root->right->right=new Node(70);
    root->right->right->left=new Node(80);
    root->right->right->right=new Node(90);
    cout<<diameter1(root)<<endl;

}