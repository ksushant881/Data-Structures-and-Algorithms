#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

class Solution {
public:
    bool buildTree(int mat[][3],Node*root,int start,int dest){
        if(start == dest)
            return true;
        
        root->left=new Node(mat[start][1]);
        root->right = new Node(mat[start][2]);
        buildTree(mat,root->left,root->left->data,dest);
        buildTree(mat,root->right,root->right->data,dest);
        
        return false;
    }
    
    bool canReach(vector<int>& nums, int start) {
        int n=nums.size();
        int dest=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                dest=i;
                break;
            }
        }
        if(dest == -1)
            return false;
        
        int mat[n][3];
        for(int i=0;i<n;i++){
            mat[i][0]=i;
            if(i-nums[i] < 0)
                mat[i][1]=i;
            else
                mat[i][1]=i-nums[i];
            if(i+nums[i] > n-1)
                mat[i][2] = i;
            else
                mat[i][2]=i+nums[i];
        }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<3;j++){
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // assert(false);
        Node*root=new Node(start);
        return buildTree(mat,root,start,dest);
        
        
        
        
    }
};

// 0 0 4
// 1 1 3
// 2 2 5
// 3 3 3
// 4 1 4
// 5 4 6
// 6 4 6
    
    
//     5
//    / \
//   4   6
//  / \ / \
// 1  44   6
// /\    
// 1 3


//accepted solution
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        queue<int>q;
        q.push(start);
        bool visited[n];
        fill(visited,visited+n,false);
        while(!q.empty()){
            start=q.front();
            q.pop();
            if(visited[start]==true)
                continue;
            else 
                visited[start]=true;
            
            if(arr[start]==0)
                return true;
            if(start-arr[start]>=0)
                q.push(start-arr[start]);
            if(start+arr[start]<n)
                q.push(start+arr[start]);
        }
        return false;
    }

    
int main(){

}