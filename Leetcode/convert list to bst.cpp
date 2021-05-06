#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class TreeNode{
    public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x){
        this->val=x;
        this->left=this->right=NULL;
    }
};

class ListNode{
    public:
    int val;
    ListNode*next;
    
    ListNode(int x){
        this->val=x;
        this->next=NULL;
    }
};

    TreeNode* build(vector<int>v,int low,int high){
        if(high<low)
            return NULL;
            int mid = low+(high-low)/2;
            TreeNode*root=new TreeNode(v[mid]);
            root->left=build(v,low,mid-1);
            root->right=build(v,mid+1,high);
        
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        
        int high=v.size()-1;
        int low =0;
        if(v.size()==0)
            return NULL;
        return build(v,low,high);
    }

int main(){
fastio

}