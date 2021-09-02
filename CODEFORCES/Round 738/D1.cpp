#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

class DSU{
    public:
    int n;
    int *parent;
    int *rank;
    void init(int n){
        this->n=n;
        this->parent=new int[n];
        this->rank=new int[n];
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(int i=0;i<n;i++){
            rank[i]=0;
        }
    }
    bool findRep(int x){
        if(parent[x]==x) return x;
        parent[x]=findRep(parent[x]);
        return parent[x];
    }
    void merge(int x,int y){
        int x_rep=findRep(x);
        int y_rep=findRep(y);
        if(x_rep==y_rep) return;
        if(rank[x_rep] > rank[y_rep]){
            parent[y_rep]=x_rep;
        }
        else if(rank[y_rep] > rank[x_rep]){
            parent[x_rep]=y_rep;
        }
        else{
            parent[y_rep]=x_rep;
            rank[x_rep++];
        }
    }
};

int main(){
fastio

int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

int n,m1,m2;
cin>>n>>m1>>m2;
vector<vector<int>>mocha(n+1,vector<int>(n+1,0));
vector<vector<int>>diana(n+1,vector<int>(n+1,0));
for(int i=0;i<m1;i++){
    int a,b;
    cin>>a>>b;
    mocha[a][b]=1;
    mocha[b][a]=1;
}
for(int i=0;i<m2;i++){
    int a,b;
    cin>>a>>b;
    diana[a][b]=1;
    diana[b][a]=1;
}


}

}