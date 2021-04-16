#include<iostream>
#include<vector>
#include<string>
using namespace std;

//naive approach to pattern matching
//just like sliding window
//pattern have distinct or repeating characters
vector<int>patt(string txt,string pat){
    int n=pat.length();
    vector<int>v;
    for(int i=0;i<=txt.length()-n;i++){
        bool flag=true;
        for(int j=i;j<n;j++){
            if(pat[j-i]!=txt[j])
                flag=false;
        }
        if(flag==true)
            v.push_back(i);
    }
    return v;
}

int main(){
    string txt="AAAAA";
    string pat="AAA";
    vector<int>v=patt(txt,pat);
    for(int x:v)
        cout<<x<<" ";
}