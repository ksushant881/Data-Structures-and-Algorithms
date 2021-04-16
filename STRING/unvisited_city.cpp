#include<bits/stdc++.h>
using namespace std;

  string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string>m;
        int n=paths.size();
        string dest=paths[0][1];
        for(int i=0;i<n;i++){
            m.insert(make_pair(paths[i][0],paths[i][1]));
            
        }
        string res;
        for(auto it:m){
            if(m.find(dest)!=m.end()){
                dest=it.second;
            }
               
        }
        return dest;
    }

int main(){

}