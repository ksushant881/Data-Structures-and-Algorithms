#include<bits/stdc++.h>
using namespace std;

//building LPS array
//LPS = Longest proper prefix suffix

int longestProperSuffixPrefix(string s,int n){

    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++){
            if(s[i]!=s[])
        }
    }
}

void LPS(string s,int LPS[]){
    int n=s.length();
    for(int i=0;i<n;i++){
        LPS[i]=longestProperSuffixPrefix(s,i);
    }
    
}

int main(){
    string s;
}