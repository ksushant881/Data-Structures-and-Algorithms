#include<iostream>
using namespace std;
#define INT_MIN -999999;
#include<algorithm>

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};

int max_element(Node*root){
    if(root==NULL){
        return INT_MIN;
    }
    return max(root->data,max_element(root->left),max_element(root->right));
}
int main(){
    Node*root=new Node(10);
    Node*n1=new Node(20);
    root->left=n1;
    Node*n2=new Node(70);
    root->right=n2;
    int c=max_element(root);
    cout<<c;
}