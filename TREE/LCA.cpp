#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    Node*left;
    Node*right;
    int data;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

//3 traversals of tree and O(n) space compexity
//storing the path of n1 from root and n2 from root
//the farthest node equal in both arrays will be answer
bool findPath(Node*root,int n,vector<Node*>&path){
    if(root==NULL){
        return false;
    }
    path.push_back(root);
    if(root->data == n)
        return true;
    if(findPath(root->left,n,path) || findPath(root->right,n,path)) //checks whether we have any of n1 or n2 in the left or right subtree
        return true;
    path.pop_back(); //if not then remove this node from path and return false
    return false;
}

Node* LCA1(Node*root,int n1,int n2){
    vector<Node*>v1;
    vector<Node*>v2;
    if(findPath(root,n1,v1)==false || findPath(root,n2,v2)==false)
        return NULL;
    for(int i=0;i<v1.size() && v2.size();i++){
        if(v1[i+1]!=v2[i+1])
            return v1[i];
    }
}

//Efficient solution
//assuming both nodes are present in the tree and doing normal traversal of tree
//4 possibilities:
//1. if root is same as n1 or n2 ===== return root
//2. if any subtree have either n1 or n2 ===== return root
//3. if one of the subtree have n1 and n2 both === return root
//4. if no subtree have any of n1 or n2 === return null
Node*lca(Node*root,int n1,int n2){
    if(root==NULL)
        return NULL;
    if(root->data==n1 || root->data==n2)
        return root;
    Node*l1=lca(root->left,n1,n2);
    Node*l2=lca(root->right,n1,n2);
    if(l1!=NULL && l2!=NULL)
        return root;
    if(l1!=NULL)
        return l1;
    else
        return l2;
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
    cout<<lca(root,30,70)->data;
}