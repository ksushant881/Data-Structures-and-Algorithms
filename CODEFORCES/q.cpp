#include<bits/stdc++.h>
using namespace std;

int val = 0;

void dfs(vector<vector<int>> &adj_list, int curr, int par, vector<int> & xors, set<pair<int,int>> &par_childs, vector<int>& min_idx, vector<int> & max_idx, vector<int> &idx){
    int xorr = curr;
	min_idx[curr] = INT_MAX;
	max_idx[curr] = INT_MIN;
    for(int child: adj_list[curr]){
        if (child == par) continue;
        dfs(adj_list, child, curr, xors, par_childs, min_idx, max_idx, idx);
        xorr = xorr ^ xors[child];
		min_idx[curr] = min(min_idx[curr], min_idx[child]);
		max_idx[curr] = max(max_idx[curr], max_idx[child]);

    }
	val+=1;
	min_idx[curr] = min(min_idx[curr], val);
	max_idx[curr] = max(max_idx[curr], val);
	idx[curr] = val;
    xors[curr] = xorr;


}

int solve (int n, vector<vector<int> > edges) {
   // Write your code here
   vector<vector<int>> adj_list(n+1);
   for(auto edge: edges){
       adj_list[edge[0]].push_back(edge[1]);
       adj_list[edge[1]].push_back(edge[0]);
   }
   vector<int> xors(n+1, 0);
   set<pair<int,int>> par_childs;
   int ans = INT_MAX;
   vector<int> min_idx(n+1), max_idx(n+1), idx(n+1);
   dfs(adj_list, 1, 0, xors, par_childs, min_idx, max_idx, idx);
   int par_xor = xors[1];
   int x1, x2, x3;
   for(int i =2; i<=n ; i++){
       for(int j = i+1; j<=n; j++){
           if(max_idx[i] >= idx[j] && idx[j] >= min_idx[i]){ // i is parent 
                x1 = xors[j];
                x2 = xors[j]^xors[i];
                x3 = par_xor^xors[i];
           }else if (max_idx[j] >= idx[i] && idx[i] >= min_idx[j]){
                x1 = xors[i];
                x2 = xors[j]^xors[i];
                x3 = par_xor^xors[j];
           }else{
                x1 = xors[i];
                x2 = xors[j];
                x3 = par_xor ^ x1 ^ x2;
           }
           ans = min(ans, max(x1, max(x2, x3))-min(x1, min(x2, x3)));
       }

   }
   return ans;
}

int main() {
    
}