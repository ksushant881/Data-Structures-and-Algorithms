#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rec(vector<int>v,int curr,int currIndex,bool &res){
        if(currIndex == v.size()+1) {res=true; return;}
        for(int i=currIndex+1;i<v.size();i++){
            if(v[i]==curr){
                rec(v,curr,i);
            }
            else if(v[i] > curr){
                break;
            }
            else{
                curr+=v[i];
            }
        }
    }
    bool makesquare(vector<int>& m) {
        int n=m.size();
        bool res;
        for(int i=0;i<n;i++){
            rec(m,m[0],0,res);
            if(res) return res;
        }
        return false;
    }
};

int main(){



}