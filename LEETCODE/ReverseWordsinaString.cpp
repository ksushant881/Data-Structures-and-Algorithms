#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        vector<string>words;
        string word="";
        for(int i=0;i<n;i++){
            if(s[i]!=' ') word+=s[i];
            else{
                if(word!="" && word!=" ") words.push_back(word);
                word="";
            }
        }
        if(word!=" " && word!="") words.push_back(word);
        string ans="";
        for(int i=words.size()-1;i>=0;i--){
            if(words[i]!=" "){
                ans+=words[i];
                if(i!=0) ans+=" ";
            }
            else continue;
        }
        return ans;
    }
};

int main(){

}