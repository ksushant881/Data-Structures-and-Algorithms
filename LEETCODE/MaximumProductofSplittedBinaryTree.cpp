#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
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

class Solution {
public:
    #define ll long
    #define mod 1000000007
    ll help(TreeNode*root, vector<ll>&sums){
        if(root == NULL) return 0;
        ll left = help(root->left,sums);
        ll right = help(root->right,sums);
        ll sum = left + right + root->val;
        sums.push_back(sum);
        return sum;
    }
    int maxProduct(TreeNode* root) {
        vector<ll>sums;
        ll ans = INT_MIN;
        ll total = help(root,sums);
        for(ll x:sums) {
            ll p = x*(total-x);
            ans = max(ans,p);
        }
        return ans%mod;
    }
};

int main(){
    
}