#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x){
        data=x;
        left=right=NULL;
    }
};

//correct solution usng BFS
bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        bool flag=true;
        q.push(root);
        while(q.empty()==false){
            TreeNode*curr=q.front();
            q.pop();
            if(curr==NULL)
                flag=false;
            else{
                if(flag==false)
                    return false;
                q.push(curr->left);
                q.push(curr->right);
            }  
        }
        return true;
    }

    //recursive solution using DFS and recursion
    //difficult
    bool isCompleteTree2(TreeNode*root){
        
    }

int main(){

}