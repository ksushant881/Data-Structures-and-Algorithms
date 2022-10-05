#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int currNode) : val(currNode), left(nullptr), right(nullptr) {}
    TreeNode(int currNode, TreeNode *left, TreeNode *right) : val(currNode), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*>q;
        q.push(root);
        int currDepth = 1;
        if(currDepth == depth){
            TreeNode*newRoot = new TreeNode(val,root,NULL);
            return newRoot;
        }
        
        while(!q.empty()){
            if(currDepth == depth-1){
                while(!q.empty()){
                    TreeNode*currNode = q.front();
                    q.pop();
                    TreeNode*prevLeft = currNode->left;
                    TreeNode*prevRight = currNode->right;
                    
                    currNode->left = new TreeNode(val,prevLeft,NULL);
                    currNode->right = new TreeNode(val,NULL,prevRight);
                }
                return root;
            }
            
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode*curr = q.front();
                q.pop();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            currDepth++;
        }
        return NULL;
    }
};

int main(){

}