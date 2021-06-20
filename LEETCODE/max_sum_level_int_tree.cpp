#include<bits/stdc++.h>
using namespace std;
//both gave same time but dfs is cooler
//my bfs solution
int maxLevelSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        queue<TreeNode*>q;
        int global=INT_MIN;
        int level=1;
        q.push(root);
        int res=0;
        while(q.empty()==false){
            int n=q.size();
            int sum=0;
            
            for(int i=0;i<n;i++){
            TreeNode*curr=q.front();
            sum+=(curr->val);
            q.pop();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
            
            }
            if(sum>global){
                global=sum;
                res=level;
            }
                
            level++;
            
        }
        return res;
        
    }

//cool dfs solution
unordered_map<int,int>mp;
void fillMap(TreeNode*root,int level){
    if(!root)
        return;
    mp[level]+=(root->val);
    fillMap(root->left,level+1);
    fillMap(root->right,level+1);
}

int maxLevel(TreeNode*root){
    fillMap(root,1);
    int ans=1;
    for(auto x:mp){
        if(x.second > mp[ans])
            ans=x.first;
    }
    return ans;
}

int main(){

}