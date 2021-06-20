#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

struct TreeNode {
      int val;
    TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return NULL;
        if(root->val==p->val || root->val==q->val)
            return root;
        TreeNode*l1=lowestCommonAncestor(root->left,p,q);
        TreeNode*l2=lowestCommonAncestor(root->right,p,q);
        if(l1!=NULL && l2!=NULL)
            return root;
        if(l1!=NULL)
            return l1;
        else
            return l2;
    }

    //slow solution
        bool buildPath(TreeNode*root,TreeNode*p,vector<TreeNode*>&v){
        if(root==NULL)
            return false;
        v.push_back(root);
        if(root->val==p->val)
            return true;
        if(buildPath(root->left,p,v)||buildPath(root->right,p,v))
            return true;
        v.pop_back();
        return false;
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>v1;
        vector<TreeNode*>v2;
        buildPath(root,p,v1);
        buildPath(root,q,v2);
        TreeNode* res;
        for(int i=0;i<min(v1.size(),v2.size());i++){
            if(v1[i]==v2[i])
                res=v1[i];
        }
        return res;
    }

int main(){
fastio
 

}