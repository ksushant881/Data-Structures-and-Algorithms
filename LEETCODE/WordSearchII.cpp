#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    vector<vector<char>>arr;
    int m,n,k;
    set<string>ans;


    bool isNotPrevElement(int x,int y,int prev_x,int prev_y){
        return x!=prev_x or y!=prev_y; 
    }

    void search(int x,int y,string word,int inx,int prev_x,int prev_y){
        if(inx == word.size()) {
            // cout<<x<<" "<<y<<" "<<prev_x<<" "<<prev_y<<" "<<word<<endl;
            ans.insert(word);
            return;
        }

        if(arr[x][y] == word[inx]){
            if(x+1 < m and isNotPrevElement(x+1,y,x,y)){
                search(x+1,y,word,inx+1,x,y);
            }
            if(x-1 >= 0 and isNotPrevElement(x-1,y,x,y)){
                search(x-1,y,word,inx+1,x,y);
            }
            if(y+1 < n and isNotPrevElement(x,y+1,x,y)){
                search(x,y+1,word,inx+1,x,y);
            }
            if(y-1 >= 0 and isNotPrevElement(x,y-1,x,y)){
                search(x,y-1,word,inx+1,x,y);
            }
        }
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        this->m = board.size();
        this->n = board[0].size();
        this->k = words.size();
        this->arr = board;

        for(int i=0;i<k;i++){
            for(int a=0;a<m;a++){
                for(int b=0;b<n;b++){
                    if(arr[a][b] == words[i][0]){
                        if(words[i].length() == 1){
                            ans.insert(words[i]);
                            continue;
                        }
                        search(a,b,words[i],0,-1,-1);
                    }
                }
            }
        }
        vector<string>res = {ans.begin(),ans.end()};
        return res;
    }
};

int main(){
    vector<vector<char>>s1 = {{'o','a','a','n'},
                              {'e','t','a','e'},
                              {'i','h','k','r'},
                              {'i','f','l','v'}
    };
    vector<string>s2 = {"oath","pea","eat","rain"};

    vector<vector<char>>g1 = {{'a','a'}};
    vector<string>g2 = {"aaa"};

    Solution s;
    vector<string>ans1 = s.findWords(g1,g2);
    for(auto x:ans1){
        cout<<x<<" ";
    }
    cout<<endl;

}