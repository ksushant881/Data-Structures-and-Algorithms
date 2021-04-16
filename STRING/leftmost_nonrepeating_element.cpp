#include<iostream>
using namespace std;

int lne(string s){
    bool visited[256];
    int res;
    fill(visited,visited+256,false);
    for(int i=s.length()-1;i>=0;i--){
        if(visited[s[i]]==false){
            visited[s[i]]=true;
            res=i;
        }
    }
    return res;
}

int main(){
    string str="geeksforgeeks";
    string str2="abbcbda";
    cout<<lne(str2);
}