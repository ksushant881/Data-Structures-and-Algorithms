#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rec(vector<string>&res , string &temp , stack<char>&st , int n){
        if(n == 0 && temp.length()==2*n){
            res.push_back(temp);
            return;
        }
        
        if(st.empty()){
            st.push('(');
            n--;
            temp+='(';
            rec(res,temp,st,n);
        }
        else{
            temp+=')';
            st.pop();
            rec(res,temp,st,n);
            
            st.push('(');
            st.push('(');
            n--;
            temp.pop_back();
            temp+='(';
            cout<<temp<<" 1"<<endl;
            rec(res,temp,st,n);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string temp="";
        stack<char>st;
        vector<string>res;
        rec(res,temp,st,n);
        return res;
    }
};

int main(){

vector<string>res;
Solution s;
res=s.generateParenthesis(3);
for(auto x:res){
    cout<<x<<endl;
}

}