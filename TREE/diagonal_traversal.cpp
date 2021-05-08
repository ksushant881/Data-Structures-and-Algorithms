#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int x){
        val=x;
        left=right=NULL;
    }
};

void diagonal(Node*root,int level,map<int,vector<int>>&mp){
    if(root==NULL) return;
    mp[level].push_back(root->val);
    diagonal(root->left,level+1,mp);
    diagonal(root->right,level,mp);
}

int main(){
fastio
map<int,vector<int>>mp;
     Node *root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right=new Node(30);
    root->right->left=new Node(60);
    root->right->right=new Node(70);

diagonal(root,0,mp);
for(int j=0;j<mp.size();j++){
    for(int i=0;i<mp[j].size();i++){
        cout<<mp[j][i]<<" ";

    }
    cout<<endl;
}
}
//      10
//    20   30
//  40 50 60 70