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
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

    void traverse(TreeNode*root,vector<double>&res){
        if(root==NULL)
            return;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
            int n=q.size();
            double avg=0;
            for(int i=0;i<n;i++){
                TreeNode*curr=q.front();
                q.pop();
                
                avg+=curr->val;
                
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
            res.push_back(avg/n);
        }
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        traverse(root,res);
        return res;
        
    }

int main(){
fastio
}