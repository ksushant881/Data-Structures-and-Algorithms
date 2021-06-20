#include<bits/stdc++.h>
using namespace std;


    //my solution worked well on small test cases
    int help(int x1,int x2,int y1,int y2){
        return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    }
    
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int dist[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) dist[i][j]=0;
                else{
                    int val=help(points[i][0],points[j][0],points[i][1],points[j][1]);
                    dist[i][j]=val;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            unordered_set<int>s;
            for(int j=0;j<n;j++){
                if(s.find(dist[i][j])!=s.end())
                    count+=2;
                s.insert(dist[i][j]);
                
            }
        }
        return count;
        
    }

    //hash map solution
    

int main(){
    vector<vector<int>>v={{0,0},{1,0},{2,0}};
    numberOfBoomerangs(v);
}