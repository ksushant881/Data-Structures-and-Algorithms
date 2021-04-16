#include<bits/stdc++.h>
using namespace std;

void help(string digits,int n,int size,vector<string> &v,string temp=""){
        if(n==size)
            v.push_back(temp);
        
        if(digits[n]=='1')
            help(digits,n+1,size,v,temp);
        
        if(digits[n]=='2'){
            help(digits,n+1,size,v,temp+'a');
            help(digits,n+1,size,v,temp+'b');
            help(digits,n+1,size,v,temp+'c');
        }
        if(digits[n]=='3'){
            help(digits,n+1,size,v,temp+'d');
            help(digits,n+1,size,v,temp+'e');
            help(digits,n+1,size,v,temp+'f');
        }
        if(digits[n]=='4'){
            help(digits,n+1,size,v,temp+'g');
            help(digits,n+1,size,v,temp+'h');
            help(digits,n+1,size,v,temp+'i');
        }
        if(digits[n]=='5'){
            help(digits,n+1,size,v,temp+'j');
            help(digits,n+1,size,v,temp+'k');
            help(digits,n+1,size,v,temp+'l');
        }
        if(digits[n]=='6'){
            help(digits,n+1,size,v,temp+'m');
            help(digits,n+1,size,v,temp+'n');
            help(digits,n+1,size,v,temp+'o');
        }
        if(digits[n]=='7'){
            help(digits,n+1,size,v,temp+'p');
            help(digits,n+1,size,v,temp+'q');
            help(digits,n+1,size,v,temp+'r');
            help(digits,n+1,size,v,temp+'s');
        }
        if(digits[n]=='8'){
            help(digits,n+1,size,v,temp+'t');
            help(digits,n+1,size,v,temp+'u');
            help(digits,n+1,size,v,temp+'v');
        }
        if(digits[n]=='9'){
            help(digits,n+1,size,v,temp+'w');
            help(digits,n+1,size,v,temp+'x');
            help(digits,n+1,size,v,temp+'y');
            help(digits,n+1,size,v,temp+'z');
        }
            
    }
    
    vector<string> letterCombinations(string digits) {
        int n=digits.length();
        vector<string>v;
        if(n==0)
            return v;
        string temp;
        help(digits,0,n,v,temp);
        return v;
    }

int main(){
    vector<string>v;
    v=letterCombinations("");
    for(string x:v)
        cout<<x<<endl;
}