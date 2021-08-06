#include<bits/stdc++.h>
using namespace std;



class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;

        queue<Node*>q;
        q.push(root);
        Node*curr=root;
        
        while(q.empty()==false){
            
            int n=q.size();
            vector<int>temp;
            for(int j=0;j<n;j++){
                Node*curr = q.front();
                temp.push_back(curr->val);
                q.pop();
                for(int i=0;i<curr->children.size();i++){
                    q.push(curr->children[i]);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};

int main(){

}