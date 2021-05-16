#include<bits/stdc++.h>
using namespace std;

        void install(TreeNode*root,TreeNode*parent,int &res,set<TreeNode*>&st){
            if(root!=NULL){
                install(root->left,root,res,st);
                install(root->right,root,res,st);
                if((parent==NULL && !st.count(root))|| !st.count(root->left) || !st.count(root->right)){
                    res++;
                    st.insert(root);
                    st.insert(parent);
                    st.insert(root->left);
                    st.insert(root->right);
                }
            }
        }
    
        int minCameraCover(TreeNode* root) {
            set<TreeNode*>st;
            st.insert(NULL);
            int res=0;
            if(root==NULL) return 0;
            if(root->left==NULL && root->right==NULL) return 1;
            install(root,NULL,res,st);
            return res;
        }

int main(){



}