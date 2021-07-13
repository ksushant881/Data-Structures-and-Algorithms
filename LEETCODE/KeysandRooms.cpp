#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

class Solution {
public:
    bool check(vector<bool>&visited){
        for(auto x:visited){
            if(!x) return false;
        }
        return true;
    }
    
    void rec(vector<vector<int>>&rooms,vector<bool>&visited,int curr){
        visited[curr] = true;
        for(auto x:rooms[curr]){
            if(!visited[x]) rec(rooms,visited,x);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>visited(n,false);
        rec(rooms,visited,0);
        return check(visited);
    }
};

int main(){

}