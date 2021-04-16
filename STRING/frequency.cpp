#include<iostream>
#include<unordered_map>
using namespace std;

void freq(string s){
    int count[26]={0};
    for(int i=0;i<s.length();i++)
        count[s[i]-'a']++;
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<(char)('a'+i)<<" ";
            cout<<count[i]<<endl;
        }
    }
    
    
}

    int main(){
        string str="geeksforgeeks";
        freq(str);
    }
    

