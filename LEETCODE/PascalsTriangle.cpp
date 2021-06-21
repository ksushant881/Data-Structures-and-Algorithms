#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(vector<vector<int>>res){
        for(auto x: res){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }

    void print(vector<int>t){
        for(auto x:t){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    void help(vector<int>prev,vector<vector<int>>&res){
        vector<int>temp;
        for(int i = 0 ; i < prev.size() ; i++){
            //cout<<"HELLO";
            if(i == 0) temp.push_back(prev[i]);
            if(i+1 <= prev.size()-1) temp.push_back(prev[i] + prev[i+1]);
            if(i == prev.size()-1) temp.push_back(prev[i]);
        }
        res.push_back(temp);
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        vector<int>temp={1};
        res.push_back(temp);
        for(int i=1;i<=numRows-1;i++){
            help(res[res.size()-1],res);
        }
        return res;
    }
};

int main(){

Solution s;
vector<vector<int>>res=s.generate(30);
s.print(res);

}