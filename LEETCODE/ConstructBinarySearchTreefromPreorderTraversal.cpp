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
    TreeNode*build(){
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        //Root Left Right
        vector<int>inroder=preorder;
        sort(inroder.begin(),inroder.end());


    }
};

int main(){

}