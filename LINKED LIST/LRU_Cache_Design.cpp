#include<bits/stdc++.h>
using namespace std;

/*
Algo : 
Use doubly linked list and hash table
Doubly linked list stores the order of recency and hash table is used to store addresses of nodes of DLL


*/

class DLL {
    DLL*prev,*next;
    int val;
    DLL(int val, DLL*pre, DLL*next){
        this->next = next;
        this->prev = prev;
        this->val = val;
    }
};

class LRU{
    unordered_map<int,DLL>mp;
    DLL dll;
    int capacity;

    LRU(int capcity){
        this->capacity = capacity;
    }

    int get(int key){
        
    }

    int put(int key,int value){

    }
};




int main(){

}