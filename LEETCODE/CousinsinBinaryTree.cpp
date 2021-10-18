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

class Solution1 {
public:
    TreeNode*parent_x=nullptr,*parent_y=nullptr;
    int depth(TreeNode*root,TreeNode*parent,int x,int dth){
        if(root == NULL) return -1;
        if(root->val == x){
            if(parent_x == NULL) parent_x=parent;
            else if(parent_x != NULL && parent_x == parent) dth=-1;
            return dth;
        }
        return max(depth(root->left,root,x,dth+1),depth(root->right,root,x,dth+1));
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int a = depth(root,NULL,x,0);
        int b = depth(root,NULL,y,0);
        if(a==b && a!=-1) return true;
        return false;
    }
};

class Solution2 {
public:
    TreeNode*parent_x=NULL,*parent_y=NULL;
    int depth_x=-1,depth_y=-1;
    bool solve(TreeNode*root,TreeNode*parent,int x,int y,int dth){
        if(root == NULL) return false;
        if(root->val == x){
            parent_x = parent;
            depth_x = dth;
        }
        if(root->val == y){
            parent_y = parent;
            depth_y = dth;
        }
        if(parent_x != parent_y && parent_x != NULL && parent_y != NULL && depth_x == depth_y && depth_x != -1)
            return true;
        if(depth_x != depth_y && depth_x != -1 && depth_y != -1)
            return false;
        if(parent_x == parent_y && parent_x != NULL && parent_y != NULL)
            return false;
        return (solve(root->left,root,x,y,dth+1) || solve(root->right,root,x,y,dth+1));
    }
    bool isCousins(TreeNode* root, int x, int y) {
        return solve(root,NULL,x,y,0);
    }
};

class Solution3 {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,TreeNode*>>q;
        TreeNode* parent_x=NULL;
        TreeNode* parent_y=NULL;
        int depth_x=-1;
        int depth_y=-1;
        q.push({root,NULL});
        int dth = 0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* curr = q.front().first;
                TreeNode* parent = q.front().second;
                q.pop();
                if(curr->val == x){
                    parent_x = parent;
                    depth_x = dth;
                }
                if(curr->val == y){
                    parent_y = parent;
                    depth_y = dth;
                }
                if(curr->left != NULL) q.push({curr->left, curr});
                if(curr->right != NULL) q.push({curr->right, curr});
            }
            dth++;
        }
        return ((parent_x != parent_y) && (depth_x == depth_y));
    }
};


int main(){

}