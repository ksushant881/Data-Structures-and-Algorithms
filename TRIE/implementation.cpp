#include<bits/stdc++.h>
using namespace std;

struct trieNode{
    trieNode *child[26];
    bool isEnd;
    trieNode(){
        isEnd = false;
        for(int i=0;i<26;i++)
            child[i]=NULL;
    }

    void insert(string s,int n){
        for(int i=0;i<n;i++){
            if(child[s[i]='a'] == NULL){
                trieNode*newChild;
                child[s[i]-'a'] = newChild;
            }
        }
    }
};

int main(){
    trieNode myTrie;

}