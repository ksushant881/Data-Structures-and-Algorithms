#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)
//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;

class Graph{
    public:
    int n;
    vector<vector<int>>g;
    void addEdge(int u,int v){
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int>indegree;
};

void solve(){
    int n;
    cin>>n;
    vector<vector<int>>g(n+1);
    vector<int>time(n+1);
    vector<int>indegree(n+1);
    int ans=0;
    f(i,n){
        int t;
        cin>>t;
        time[i+1]=t;
        int k;
        cin>>k;
        f(j,k){
            int x;
            cin>>x;
            g[i+1].push_back(x);
        }
        indegree[i+1]=g[i+1].size();
    }
    ans=time[n];
    for(int i=0;i<g[n].size();i++){
        ans+=g[]
    }
}

int main(){
fastio
int tc=1;
// cin >> tc;
f(casess,tc){
   solve();
}
}