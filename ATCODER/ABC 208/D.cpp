#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef pair<int,unsigned long long> PII;
typedef vector<PII> VPII;
typedef vector<VPII> VVPII;

void DijkstrasShortestPath (int source_node, int node_count, VVPII& graph) {

    // Assume that the distance from source_node to other nodes is infinite 
    // in the beginnging, i.e initialize the distance vector to a max value
    const long long INF = 999999999999;
    vector<unsigned long long> dist(node_count, INF);
    set<PII> set_length_node;
    
    // Distance from starting vertex to itself is 0
    dist[source_node] = 0;
    set_length_node.insert(PII(0,source_node));

    while (!set_length_node.empty()) {

        PII top = *set_length_node.begin();
        set_length_node.erase(set_length_node.begin());

        int current_source_node = top.second;

        for (auto& it : graph[current_source_node]) {

            int adj_node = it.first;
            int length_to_adjnode = it.second;
    
            // Edge relaxation 
            if (dist[adj_node] > length_to_adjnode + dist[current_source_node]) {
    
                // If the distance to the adjacent node is not INF, means the pair <dist, node> is in the set
                // Remove the pair before updating it in the set.
                if (dist[adj_node] != INF) {
                   set_length_node.erase(set_length_node.find(PII(dist[adj_node],adj_node))); 
                }
                dist[adj_node] = length_to_adjnode + dist[current_source_node];
                set_length_node.insert(PII(dist[adj_node], adj_node));
            }
        }
    }   

    for (int i=0; i<node_count; i++)
        cout << "Source Node(" << source_node << ") -> Destination Node(" << i << ") : " << dist[i] << endl;
}

int main(){
fastio
 
int tc=1;
// cin >> tc;
for(int casess=0;casess<tc;casess++){

int n,m;
cin>>n>>m;


}
}