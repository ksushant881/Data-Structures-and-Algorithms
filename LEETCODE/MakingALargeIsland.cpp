#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    vector<int>islands;
    // int ex=0;
    void dfs(vector<vector<int>>&g,int n,int m,int i,int j,int &size,vector<vector<bool>>&visited){
        visited[i][j] = true;
        if(g[i][j] == 1) {
            size++;
            g[i][j] = islands.size()+2;
        }
        // ex++;
        if(i+1<n && visited[i+1][j] ==  false && g[i+1][j]==1){
            dfs(g,n,m,i+1,j,size,visited);
        }
        if(i-1>=0 && visited[i-1][j] ==  false && g[i-1][j]==1){
            dfs(g,n,m,i-1,j,size,visited);
        }
        if(j+1<m && visited[i][j+1] ==  false && g[i][j+1]==1){
            dfs(g,n,m,i,j+1,size,visited);
        }
        if(j-1>=0 && visited[i][j-1] ==  false && g[i][j-1]==1){
            dfs(g,n,m,i,j-1,size,visited);
        }
        //return size;
    }

    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j] == false && grid[i][j] == 1){
                    int curr=0;
                    dfs(grid,n,m,i,j,curr,visited);
                    islands.push_back(curr);
                    // ex=0;
                }
            }
        }
        
        for(auto x:grid){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
        
        for(auto x:islands){
            cout<<x<<" ";
        }
        cout<<endl;
        
        int ans=0;
        //cout<<islands[0];

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j] == 0){
                        int up,down,left,right;
                        up=down=left=right=0;
                        set<int>st;
                        
                        // cout<<up<<down<<left<<right<<endl;

                        if(j-1>=0 && grid[i][j-1]>1){ 
                            left = islands[grid[i][j-1]-2];
                            st.insert(grid[i][j-1]-2);
                        }
                        // cout<<left<<"here"<<endl;

                        if(j+1<m && grid[i][j+1]>1 && st.find(grid[i][j+1]-2)==st.end()){ right = islands[grid[i][j+1]-2];
                            // cout<<right<<"here"<<endl;
                            st.insert(grid[i][j+1]-2);
                        }
                        
                        // cout<<"hi"<<endl;
                        
                        if(i-1>=0 && grid[i-1][j]>1 && !st.count(grid[i-1][j]-2)){ 
                            up = islands[grid[i-1][j]-2];
                            st.insert(grid[i-1][j]-2);
                        }
                        // cout<<up<<"yp here"<<endl;

                        if(i+1<n && grid[i+1][j]>1 && !st.count(grid[i+1][j]-2)) {
                            down = islands[grid[i+1][j]-2];
                            st.insert(grid[i+1][j]-2);
                        }
                        
                        //cout<<down<<"here"<<endl;

                        // int max1 = max(up,down);
                        // int max2 = max(down,left);
                        // int max3 = max(left,right);
                        // int max11 = max(max1,max2);
                        // int max22 = max(max2,max3);
                        //cout<<ans<<endl;
                        // grid[i][j] = max11 + max22;
                        grid[i][j]=left+right+up+down;
                        ans = max(ans,grid[i][j]);
                    }
                }
            }
        
            ans++;
            //cout<<ans<<endl;
            for(int i=0;i<islands.size();i++){
                if(islands[i]==m*n){
                    return m*n;
                }
                ans=max(ans,islands[i]);
            }
        
        
        return ans;
    }
};

//DSU data structure used
class union_find
{
    int m,n;
    int count;
    vector<int> parent;
    vector<int> size;
    int max_size;
public:
    union_find(vector<vector<int>>& grid)
    {
        count=0;
        max_size=0;
        m=grid.size(),n=grid[0].size();
        parent.resize(m*n+1);
        size.resize(m*n+1);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]) {parent[i*n+j]=i*n+j;size[i*n+j]=1;count++;}
            }
        }
        if(count) max_size=1;
        parent[n*m]=n*m;//dummy node
    }
    int find(int node)
    {
        while(parent[node]!=node) node=parent[node];
        return node;
    }
    void merge(int ni,int nj)
    {
        int i_id=find(ni);
        int j_id=find(nj);
        if(i_id==j_id) return;
        if(i_id<j_id) {parent[j_id]=i_id;size[i_id]+=size[j_id];size[j_id]=0;max_size=max(max_size,size[i_id]);}
        else {parent[i_id]=j_id;size[j_id]+=size[i_id];size[i_id]=0;max_size=max(max_size,size[j_id]);}
        count--;
    }
    bool connected(int ni,int nj) {return find(ni)==find(nj);}
    int get_numset() {return count;}
    int get_size(int p) {return size[p];}
    int get_maxsize() {return max_size;}
};

class Solution2 {
public:
    int largestIsland(vector<vector<int>>& grid) {
        //disjoint set and see which one flip will add the largest
        //using the i*n+j as the root
        //bfs search to merge 
        union_find uf(grid);
        int m=grid.size(),n=grid[0].size();
        int dir[][2]={{-1,0},{1,0},{0,-1},{0,1}};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    for(int k=0;k<4;k++)
                    {
                        int x=i+dir[k][0],y=j+dir[k][1];
                        if(x>=0 && x<m && y>=0 && y<n && grid[x][y])
                        {
                            uf.merge(i*n+j,x*n+y);
                        }
                    }
                }
            }
        }
        //now we get all the adjoint set, we will check the 0 to see which connect two or three or 4
        int maxlen=INT_MIN;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!grid[i][j])
                {
                    unordered_set<int> us;
                    for(int k=0;k<4;k++)
                    {
                        int x=i+dir[k][0],y=j+dir[k][1];

                        if(x>=0 && x<m && y>=0 && y<n && grid[x][y])
                        {
                            int p=uf.find(x*n+y);//same region cannot be added multiple times
                            us.insert(p);
                        }
                    }
                    int cnt=0;
                    for(auto it=us.begin();it!=us.end();it++) cnt+=uf.get_size(*it);
                    maxlen=max(maxlen,cnt);
                }
            }
        }
        return maxlen==INT_MIN?uf.get_maxsize():maxlen+1;
    }
};

int main(){

}