#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool allCapital(string s){
        int n = s.length();
        for(int i=1;i<n;i++){
            if(s[i]>='A' && s[i]<='Z') continue;
            else return false;
        }
        return true;
    }
    
    bool allSmall(string s){
        int n=s.length();
        for(int i=1;i<n;i++){
            if(s[i]>='a' && s[i]<='z') continue;
            else return false;
        }
        return true;
    }
    
    bool detectCapitalUse(string word) {
        int n=word.length();
        if(word[0] >='A' && word[0]<='Z'){
            if(allCapital(word) || allSmall(word)) return true;
        }
        else{
            if(allSmall(word)) return true;
        }
        return false;
    }
};

int main(){

}