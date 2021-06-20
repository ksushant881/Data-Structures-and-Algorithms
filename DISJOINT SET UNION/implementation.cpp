#include<bits/stdc++.h>
using namespace std;

//simple implementaion using array
//each array element represent the representative of that set in which i is present
//visualize as array of trees
// in find representative we traverse the whole tree to reach the top root
//which is the representative of every elemnt in that tree
// every single element is representative of itself so root represents itself

class DSU1{
    public:
    int n;
    int *parent;
    
    void initialize(int n){
        this->n=n;
        for(int i=0;i<n;i++){
            this->parent = new int[n];
        }
    }

    void print(){
        for(int i=0;i<n;i++){
            cout<<parent[i]<<" ";
        }
    }

    //O(n) worst case
    int findRep(int x){
        if(parent[x] == x) return x;
        else findRep(parent[x]);
    }

    //O(n) worst case
    void takeUnion(int x,int y){
        int x_rep = findRep(x);
        int y_rep = findRep(y);
        if(x_rep == y_rep) return;
        parent[y_rep] = x_rep;
    }
};

//optimization on tree height depicted by rank
class DSU2{
    public:
    int n;
    int *parent;
    int *rank;
    
    void initialize(int n){
        this->n=n;
        this->parent = new int[n];
        this->rank = new int[n];
        for(int i=0;i<n;i++){
            parent[i] = i;
        }
        for(int i=0;i<n;i++){
            rank[i] = 0;
        }
    }

    void print(){
        for(int i=0;i<n;i++){
            cout<<parent[i]<<" ";
        }
        for(int i=0;i<n;i++){
            cout<<rank[i]<<" ";
        }
    }

    //O(n) worst case
    int findRep(int x){
        if(parent[x] == x) return x;
        else findRep(parent[x]);
    }

    //O(log n) solution to union
    void takeUnion(int x,int y){
        int x_rep = findRep(x);
        int y_rep = findRep(y);
        if(x_rep == y_rep) return;
        if(rank[x_rep] > rank[y_rep]){
            parent[y_rep] = x_rep;
        }
        else if(rank[x_rep] < rank[y_rep]){
            parent[x_rep] = y_rep;
        }
        else{
            parent[y_rep] = x_rep;
            rank[x_rep]++;
        }
    }
};

//optimization on findrep using path compression
class DSU3{
    public:
    int n;
    int *parent;
    int *rank;
    
    void initialize(int n){
        this->n=n;
        this->parent = new int[n];
        this->rank = new int[n];
        for(int i=0;i<n;i++){
            parent[i] = i;
        }
        for(int i=0;i<n;i++){
            rank[i] = 0;
        }
    }

    void print(){
        for(int i=0;i<n;i++){
            cout<<parent[i]<<" ";
        }
        for(int i=0;i<n;i++){
            cout<<rank[i]<<" ";
        }
    }

    //o(m*alpha(n)) complexity    //this is amortized complexity
    //m = no. of operations 
    //n = no. of elements
    //alpha(n) = Inverse Ackemann function
    int findRep(int x){
        if(parent[x] == x) return x;
        parent[x] = findRep(parent[x]);
        return parent[x];
    }

    //O(log n) solution to union
    void takeUnion(int x,int y){
        int x_rep = findRep(x);
        int y_rep = findRep(y);
        if(x_rep == y_rep) return;
        if(rank[x_rep] > rank[y_rep]){
            parent[y_rep] = x_rep;
        }
        else if(rank[x_rep] < rank[y_rep]){
            parent[x_rep] = y_rep;
        }
        else{
            parent[y_rep] = x_rep;
            rank[x_rep]++;
        }
    }
};

int main(){



}