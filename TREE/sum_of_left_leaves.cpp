#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left,*right;
    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};

void help(Node*root,int isleft,int &sum){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL && isleft==1){
            
            sum+=root->val;
            //cout<<sum<<" ";
        }
        help(root->left,1,sum);
        help(root->right,0,sum);
    }
    
    int sumOfLeftLeaves(Node* root) {
        int sum=0;
        if(root==NULL)
            return sum;
        help(root,0,sum);
        
        return sum;
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

    cout<<sumOfLeftLeaves(root);
}