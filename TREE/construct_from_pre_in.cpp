#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

int preindex=0;
node* construct(int pre[],int in[],int is,int ie){
    if(ie<is)
        return NULL;
    node*root=new node(pre[preindex++]);
    int inindex;
    for(int i=is;i<=ie;i++){
        if(in[i]==(root->data)){
             inindex=i;
            break;
        }
    }
    root->left=construct(pre,in,is,inindex-1);
    root->right=construct(pre,in,inindex+1,ie);
    return root;
    }


void ino(node*root){
    if(root==NULL)
        return;
    
    ino(root->left);
    cout<<root->data<<" ";
    ino(root->right);
}

int main(){
   
   int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
    node*root=construct(pre,in,0,4);
    ino(root);
    
}