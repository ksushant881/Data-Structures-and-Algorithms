#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    priority_queue<int>pq;
    void inorder(TreeNode*root,int k,int &ans){
        if(root == NULL) return;
        inorder(root->left,k,ans);
        pq.push(root->val);
        if(pq.size() == k){
            ans = pq.top();
            return;
        }
        inorder(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        inorder(root,k,ans);
        return ans;
    }
};

//iterative inorder traversal
class Solution2{
    public:

    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>st;
        TreeNode*curr = root;
        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr = curr ->left;
            }
            curr = st.top();
            st.pop();
            //cout<<curr->val<<" ";
            k--;
            if(!k) return curr->val;
            curr = curr -> right;
        }
        return 0;
    }
};

int main(){
    TreeNode *root = new TreeNode(3);
    root -> left = new TreeNode(1);
    root->right = new TreeNode(4);
    root -> left -> right = new TreeNode(2);
    Solution2 s;
    cout<<s.kthSmallest(root,1);
}