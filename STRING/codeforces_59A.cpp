#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="heLLO";
    //cin>>s;
    //unordered_set<char>s;
    int u=0;
    int l=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>=97)
            l++;
            else if(s[i]<91)
            u++;
    }
    int add=97-65;
    if(l>=u){
        for(int i=0;i<n;i++){
            if(s[i]<=90){
                s[i]=s[i]+add;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(s[i]>=97){
                s[i]=s[i]-add;
            }
        }
    }
    cout<<s;
    
    
}