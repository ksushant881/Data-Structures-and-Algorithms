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
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution1 {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum = INT_MIN;
        int level;
        int cnt = 0;
        while(!q.empty()){
            int n = q.size();
            int currLevel = 0;
            cnt++;
            for(int i=0;i<n;i++){
                TreeNode*front = q.front();
                q.pop();
                currLevel+=front->val;
                
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);

            }
            
            if(sum < currLevel){
                sum = currLevel;
                level = cnt;
            }
        }
        cout<<sum<<endl;
        return level;
    }
};

class Solution2 {

    unordered_map<int,int>mp;
void fillMap(TreeNode*root,int level){
    if(!root)
        return;
    mp[level]+=(root->val);
    fillMap(root->left,level+1);
    fillMap(root->right,level+1);
}
public:
int maxLevelSum(TreeNode*root){
    fillMap(root,1);
    int ans=1;
    for(auto x:mp){
        if(x.second > mp[ans])
            ans=x.first;
    }
    return ans;
}
};

int main(){
    
}