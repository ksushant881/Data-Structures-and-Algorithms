#include<iostream>
using namespace std;

void string_p(string s,int i){
    if(i==s.length()-1){
        cout<<s<<" ";
        return;
    }
     for(int j=i;j<s.length();j++){
         swap(s[i],s[j]);
         string_p(s,i+1);
         swap(s[i],s[j]);
     }
}

int main(){
    string str="ABCD";
    string_p(str,0);
}