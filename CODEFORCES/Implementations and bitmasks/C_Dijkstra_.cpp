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
void solve(vector<vector<int>> g,int n,int src){
    vector<int>dist(n+1,INT_MAX);
    dist[1] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i=1; i<=n;i++){
        pq.push({dist[i],i});
    }
    vector<bool>fin(n+1,false);

    while(!pq.empty()){
        int node = pq.top().second;
        fin[node] = true;
        pq.pop();
        for(int i=1;i<=n;i++){
            if(g[node][i]!=0 && !fin[i]){
                if(dist[i] > dist[node] + g[node][i]){
                    dist[i] = dist[node] + g[node][i];
                }
            }
        }
    // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>t;
        
        for(int i=2;i<=n;i++){
            if(!fin[i]){
                pq.push({dist[i],i});
            }
        }
        // pq=t;
    }
    for(int i=2;i<=n;i++) cout<<dist[i]<<" ";
    return;
}



int main(){
fastio

int tc=1;
// cin >> tc;
f(casess,tc){
int n,m;
cin>>n>>m;
vector<vector<int>>g(n+1,vector<int>(n+1,0));
f(i,m){
    int a,b,c;
    cin>>a>>b>>c;
    if(g[a][b]==0) {
        g[a][b] = c;
        g[b][a] = c;
    }
    else{
        int x = min(c,g[a][b]);
        g[a][b] = x;
        g[b][a] = x;
    }
}
// f(i,n+1){
//     f(j,n+1){
//         cout<<g[i][j]<<" ";
//     }
//     cout<<endl;
// }

solve(g,n,1);
return 0;


}

}