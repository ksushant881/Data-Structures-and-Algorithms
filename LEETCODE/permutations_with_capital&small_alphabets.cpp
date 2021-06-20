#include<bits/stdc++.h>
using namespace std;

//784. Letter Case Permutation

    void help(string s, int n,int i, vector<string>&v,string temp=""){
        if(i==n)
        {
            v.push_back(temp);
            return;
        }
        if(s[i] >= 65 && s[i] < 91){
            help(s,n,i+1,v,temp+char(s[i]+32));
            help(s,n,i+1,v,temp+s[i]);
        }
            
        else if(s[i] >= 97 && s[i] < 123){
            help(s,n,i+1,v,temp+char(s[i]-32));
            help(s,n,i+1,v,temp+s[i]);
        }
        else
        {
            help(s,n,i+1,v,temp+s[i]);
        }
            
    }
    
    vector<string> letterCasePermutation(string S) {
        int n=S.length();
        vector<string>v;
        string temp;
        help(S,n,0,v,temp);
        return v;
        
    }

int main(){

}