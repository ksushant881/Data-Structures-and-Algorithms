#include<iostream>
#include<vector>

using namespace std;

//O(n^3) solution
bool distinct(string s,int start,int end){
    bool visited[256]={false};
    for(int i=start;i<end;i++){
        if(visited[s[i]]==true)
            return false;
        visited[s[i]]=true;
    }
    return true;

}

int lsd1(string s){
    int len=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length();j++){
            if(distinct(s,i,j)==true)
                len=max(len,j-i+1);
        }
    }
}


//O(n^2) solution
int lsd2(string s){
    int len=0;
   for(int i=0;i<s.length();i++){
       bool visited[256]={false};
       for(int j=i;j<s.length();j++){
           if(visited[s[j]]==true)
            break;
            else{
            visited[s[i]]=true;
            len=max(len,j-i+1);
            }
       }
   }
   return len;  
}

//O(n) solution
int lsd3(string s){
    vector<int>v(256,-1);
    int n=s.length();
    int len=0;
    int i=0;
   
    for(int j=0;j<n;j++){
        i=max(i,v[s[j]]+1);
        int maxEnd=j-i+1;
        len=max(len,maxEnd);
        v[s[j]]=j;
    }
    return len;
}

int main(){
    string str="abcadbd";
    cout<<lsd3(str);
}
