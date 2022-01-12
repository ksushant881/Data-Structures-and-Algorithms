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

class Solution {
public:
    vector<vector<int>>all;
    void getNumbers(TreeNode*root,vector<int>temp){
        if(root == NULL || (root->left == NULL && root->right == NULL)){
            all.push_back(temp);
            return;
        }
        if(root->left!=NULL) temp.push_back(root->left->val);
        getNumbers(root->left,temp);
        if(temp.size() > 1) temp.pop_back();
        if(root->right!=NULL) temp.push_back(root->right->val);
        getNumbers(root->right,temp);
    }

    int convertNumbers(){
        int ans=0;
        for(auto x:all){
            int num=0,k=0;
            if(x.size()==1) continue;
            for(int i=x.size()-1;i>=0;i--){
                num+=x[i]*pow(10,k);
                k++;
            }
            ans+=num;
        }
        return ans;
    }

    int sumNumbers(TreeNode* root) {
        vector<int>temp;
        if(root==NULL) return 0;
        temp.push_back(root->val);
        getNumbers(root,temp);
        return convertNumbers();
        // for(auto x:all){
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        // return 0;
    }
};

int main(){

}
