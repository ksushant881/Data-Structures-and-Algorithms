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
 

    int getMax(vector<int>nums,int low,int high){
        int res=INT_MIN;
        int i;
        for(i=low;i<=high;i++){
                res=max(res,nums[i]);
        }
        return i;
    }
    
    TreeNode*buildTree(vector<int>nums,int low,int high){
        if(low>high)
            return NULL;
        int curr = getMax(nums,low,high);
        TreeNode*root=new TreeNode(nums[curr]);
        root->left = buildTree(nums,low,curr-1);
        root->right = buildTree(nums,curr+1,high);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildTree(nums,0,nums.size()-1);
    }

int main(){
fastio
 
vector<int>v={3,2,1,6,0,5};
cout<<constructMaximumBinaryTree(v)->val;
}