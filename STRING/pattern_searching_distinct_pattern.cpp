#include<iostream>
using namespace std;

int patt(string text,string pat){
    int n1=text.length();
    int n2=pat.length();
      
    for(int i=0;i<=n1-n2;){
        int j;
        for(j=0;j<n2;j++){
            if(text[i+j]!=pat[j])
                break;
        }
        if(j==n2)
            cout<<i<<" ";
        if(j==0)
            i++;
        else 
            i=i+j;
           
    }
}

int main(){
    string txt="ABCFEABCDRTABCDMUAYABCYABCD";
    string pat="ABCD";
    patt(txt,pat); 
}