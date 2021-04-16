#include<iostream>
using namespace std;

void maxx(Node*root,int num){
    if(root!=NULL)
        num=root->data;
    num=max(num,maxx(root->left,num),maxx(root->right,num));
    return num;
}