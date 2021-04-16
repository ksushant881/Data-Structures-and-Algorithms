#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node*left,*right;
    Node(int x){
        val=x;
        left=right=NULL;
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
}