#include<bits/stdc++.h>
using namespace std;

struct trieNode{
    trieNode *child[26]; //every node can have upto 26 branches
    bool isEnd;

    trieNode(){
        isEnd = false;
        for(int i=0;i<26;i++)
            child[i]=NULL;
    }

    void insert(string key,trieNode*root){
        trieNode*curr = root;
        for(int i=0;i<key.size();i++){
            int index = key[i]-'a';
            if(curr->child[index] == NULL)
                curr->child[index]=new trieNode();
            curr=curr->child[index];
        }
        curr->isEnd = true;
    }

    bool search(string key,trieNode*root){
        trieNode*curr = root;
        for(int i=0;i<key.length();i++){
            int index=key[i]='a';
            if(curr->child[index] == NULL) return false;
            curr=curr->child[index];
        }
        return curr->isEnd;
    }   

    //recursive function to delete key from dictionary
    bool isEmpty(trieNode*root){
        for(int i=0;i<26;i++){
            if(root->child[i]!=NULL) return false;
        }
        return true;
    }
    trieNode* deleteWord(string key,trieNode*root,int inx){
        if(root == NULL) return NULL;
        if(inx == key.length()){
            root->isEnd = false;
            if(isEmpty(root)){
                delete(root);
                root=NULL;
            }
            return root;
        }
        int index = key[inx]-'a';
        root->child[inx]=deleteWord(key,root->child[inx],inx+1);
        if(isEmpty(root) && root->isEnd==false){
            delete(root);
            root=NULL;
        }
        return root;
    }
};

int main(){
    trieNode myTrie;

}