#include<bits/stdc++.h>
using namespace std;

    bool valid(string s){
        int n=s.length();
        
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                st.push(s[i]);
            else if(st.empty()==false && s[i]==')')
                st.pop();
            else
                return false;
        }
        if(!st.empty())
            return false;
        else
            return true;
    }
    
    void help(int n,int m,int size,string s=""){
        if(m ==0 && n==0){
            if(valid(s))
                cout<<s<<endl;
            else
                return;
        }
        if(m>0)
            help(n,m-1,size,s+')');
        if(n>0)
            help(n-1,m,size,s+'(');
    }
    
    
    vector<string> generateParenthesis(int n) {
        string s;
        help(n,n,2*n,s);
        vector<string>v;
        return v;
    }

int main(){
     generateParenthesis(3);
    //cout<<valid("");
}