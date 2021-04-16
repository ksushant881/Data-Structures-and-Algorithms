#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    Node*left;
    Node*right;
    int data;
};

bool findPath(Node*root, vector<Node*>&path,int n){
    if(root==NULL)
        return false;
    path.push_back(root);
    if(root->data==n)
        return true;
    if(findPath(root->left,path,n)||findPath(root->right,path,n))
        return true;
    path.pop_back();
    return false;
    
}
Node* LCA1(Node*root,int n1,int n2){
    vector<Node*>v1;
    vector<Node*>v2;
    if(findPath(root,v1,n1)==false || findPath(root,v2,n2)==false)
        return NULL;
    for(int i=0;i<v1.size() && v2.size();i++){
        if(v1[i+1]!=v2[i+1])
            return v1[i];
    }

}