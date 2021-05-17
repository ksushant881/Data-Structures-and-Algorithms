#include<bits/stdc++.h>
using namespace std;

        struct TreeNode {
            int val;
            TreeNode *left;
            TreeNode *right;
            TreeNode() : val(0), left(nullptr), right(nullptr) {}
            TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
            TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
        };

        //with O(n+h) space , O(n) time complexity
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

        //O(h) space O(n) time complexity

        //0->not covered  1->covered by camera  2->camera
        int dfs(TreeNode*root,int &res){
            if(root==NULL) return 1;
            int left=dfs(root->left,res);
            int right=dfs(root->right,res);
            if(left==0 || right==0){
                res++;
                return 2;
            }
            else if(left==2 || right==2){
                return 1;
            }
            else{
                return 0;
            }
        }

        int minCameraCover2(TreeNode* root) {
            int res=0;
            int ans=dfs(root,res);
            return ans==0?res+1:res;
        }

int main(){



}