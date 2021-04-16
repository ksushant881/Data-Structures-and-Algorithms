#include<bits/stdc++.h>
using namespace std;

void subsets(string s,string str="",int i){
    if(i==s.length()){
        cout<<str<<" ";
        return;
    }
    subsets(s,str+s[i],i+1);
    subsets(s,str,i+1);   
}

int main(){
    string str;
    subsets("ABC",str,0);
}