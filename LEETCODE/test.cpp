#include<bits/stdc++.h>
using namespace std;


int main(){
int k=2;
cout<<~k;


}

class Solution {
private:
    bool exploreFromNode(vector<vector<int>>& graph, int startNode = 0) {
        // support variables
        int colours[100] = {}, len = 1, currNode;
        bool isGroupA = true;
        queue<int> q;
        // adding and marking the start node
        q.push(startNode);
        colours[startNode] = 1;
        while (len) {
            while(len--) {
                // extracting and popping the next element of the queue
                currNode = q.front();
                q.pop();
                // parsing all its neighbours
                for (int n: graph[currNode]) {
                    // checking if we already visited neighbour n
                    if (colours[n]) {
                        // if it is the same colour as the current one, we return false
                        if (colours[n] == (isGroupA ? 1 : -1)) return false;
                    }
                    // if not, we mark and push it in our queue
                    else {
                        colours[n] = isGroupA ? -1 : 1;
                        q.push(n);
                    }
                }
            }
            // preparing for the next loop
            len = q.size();
            isGroupA = !isGroupA;
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        for (int i = 0, lmt = graph.size(); i < lmt; i++) {
            if (!exploreFromNode(graph, i)) return false;
        }
        return true;
    }
};