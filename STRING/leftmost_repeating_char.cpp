#include<iostream>
using namespace std;

int leftchar(string str){
    for(int i=0;i<str.length()-1;i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                return i;
            }
        }
    }
    return -1;
}

int leftchar2(string &str){
    int m=INT16_MAX;
   
    int count[256];
    fill(count,count+256,-1);
    
    for(int i=0;i<str.length();i++){
       
         int c=count[str[i]];
         if(c==-1)
            count[str[i]]=i;
        else
            m=min(m,count[str[i]]);
        
    }
    return (m==INT16_MAX)?-1:m;
}

int leftchar3(string s){
    bool visited[256];
    fill(visited,visited+256,false);
    int res=-1;
    for(int i=s.length()-1;i>=0;i--){
        if(visited[s[i]]==false)
            visited[s[i]]==true;
        else
            res=i;
    }
    return res;


}

int main(){
    string s="lsdbfacb";
    cout<<leftchar3(s);
}