#include<iostream>
#define V 5
using namespace std;

int MST(int graph[V][V]){
    int key[V];
    for(int i=0;i<V;i++){
        key[i]=INT16_MAX;
    }
    key[0]=0;
    bool mSet[V];
    for(int i=0;i<V;i++){
        mSet[i]=false;
    }
    
}