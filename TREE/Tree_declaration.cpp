#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *left;
    Node *right;
    Node(int k){ //constructor of this node
        data=k;
        left=right=NULL; //while creating a node both pointers are null
    }
};

int main(){
    Node *root=new Node(10); //dynamic memory allocation using new keyword
    root->left=new Node(20);
}