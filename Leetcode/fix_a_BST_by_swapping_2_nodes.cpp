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


/*
Algorithm:
1. Take 3 variables prev first second, first and second are the ones which will store numbers to be swapped.
2. All are initialized by a value which will not be present in vector
3. We update prev on every iteration at the end of the loop
3. We check for an anomoly (which will appear only after atleast 1 iteration is complete ) by comparing prev and current item.
4. If we have no anomoly i.e. current element is greater than previous element then ignore and proceed with updating the prev 
   variable with current value.
5. If we have an anamoly, we are going to store values in first and second.
6. Now what will be the wrong value here, it has to be the prev value because it has come smaller than current item, so we 
   store prev in first and curr in second. 
7.  Now we traverse again if we get another anomly and since our first is already fixed we know first is at a place which has 
    anamoly for sure so we dont update first rather we just update second and that too with current value beacuse if we have 
    a anamoly here then the prev element must have been at its correct place and correct element is at wrong place.
8. Loop ends we have our two numbers which are at wrong positions. For swapping we need their positions so 1 more traversal
   required.
*/

void inorder(Node*root,vector<int>&v){
    if(root!=NULL)
    {
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
}


void fix(vector<int>&v){
    int prev=INT_MIN;
    int first=-1;
    int second=-1;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(prev > v[i]){
            if(first==-1)
                first=prev;
            second=v[i];
        }
        prev=v[i];
    }

    //cout<<first<<" "<<second;
    int temp;
    for(int i=0;i<n;i++){
        if(v[i]==first){
            first=i;
        }
            
        if(v[i]==second){
            second=i;
            break;
        }
    }
    swap(v[first],v[second]);
}


Node*prevv=NULL;
Node*first=NULL;
Node*second=NULL;

void find(Node*root){
    if(root==NULL)
        return;
    find(root->left);
    if(prevv!=NULL && root->data < prevv->data){
        if(first==NULL)
            first=prevv;
        second=root;
    }
    prevv=root;
    find(root->right);   
}

// void fixTree(Node*root){
//     find(root,prev,first,second);
//     cout<<first->data<<" "<<second->data;
// }

int main(){
    Node*root=new Node(20);
    root->left=new Node(60);
    root->right=new Node(80);
    root->left->left=new Node(4);
    root->left->right=new Node(10);
    root->right->left=new Node(8);
    root->right->right=new Node(100);
    
    // vector<int>v;
    // inorder(root,v);
    // fix(v);
    // for(int x:v)
    //     cout<<x<<" ";
    
    find(root);
    cout<<first->data<<" "<<second->data;
}