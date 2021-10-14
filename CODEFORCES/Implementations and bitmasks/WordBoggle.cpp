#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dx[8] = {-1,1,0,0,-1,1,1,-1};
    int dy[8] = {0,0,-1,1,-1,-1,1,1};
    set<string>ans;
    void dfs(vector<vector<char> >& board,int x,int y,string s,int index,vector<vector<bool>>visited){
        // if(x > board.size()-1 || y > board[0].size()-1 || x < 0 || y < 0) return;
        if(index == s.length()){
            ans.insert(s);
            return;
        }
        for(int i=0;i<8;i++){
            if(x+dx[i] > board.size()-1 || y+dy[i] > board[0].size()-1 || x+dx[i] < 0 || y+dy[i] < 0)
                continue;
            if(board[x+dx[i]][y+dy[i]] == s[index] && !visited[x+dx[i]][y+dy[i]]){
                if(s == "QEQPJ") cout<<board[x+dx[i]][y+dy[i]]<<" hell"<<endl;
                visited[x+dx[i]][y+dy[i]] = true;
                dfs(board,x+dx[i],y+dy[i],s,index+1,visited);
            }
        }
    }
    
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    // Code here
	    int n=board.size();
	    int m=board[0].size();
	    
	    for(int i=0;i<dictionary.size();i++){
	        int len=dictionary[i].length();
	        vector<vector<bool>>visited(n,vector<bool>(m,false));
	        for(int j=0;j<n;j++){
	            for(int k=0;k<m;k++){
	                if(board[j][k] == dictionary[i][0]){
                        if(dictionary[i] == "QEQPJ") cout<<board[j][k]<<endl;
	                    visited[j][k] = true;
	                    dfs(board,j,k,dictionary[i],1,visited);
	                }
	            }
	        }
	    }
        vector<string>res={ans.begin(),ans.end()};
	    return res;
	}
};

int main(){
    vector<string>v = {"CAT"};
    vector<vector<char>>board = {{'C','A','P'},{'A','N','D'},{'T','I','E'}};

    vector<string>v1 = {"GEEKS","FOR","QUIZ","GO"};
    vector<vector<char>>board1 = {{'G','I','Z'},{'U','E','K'},{'Q','S','E'}};

    vector<string>v2 = {"IUHQENN","IH", "JPQIH", "QEQPJ", "QIHINQEPJNN" ,"IHNQENNJP" ,"JPQ" ,"QPENNJEWD"};
    vector<vector<char>>board2 = {{'N','J'},{'N','P'},{'E','Q'},{'Q','I'},{'N','H'},{'U','I'}};

    Solution s;
    vector<string>ans=s.wordBoggle(board2,v2);
    for(auto x:ans){
        cout<<x<<endl;
    }
}