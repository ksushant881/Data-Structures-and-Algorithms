#include<bits/stdc++.h>
using namespace std;

string infx_to_posfx(string s){
    int n=s.length();
    stack<char>st;
    for(int i=0;i<n;i++){
        
    }
}

int main(){

string s1="a+b*c";
string s2="(a+b)*c";
string s3="a^b^c";
string s4="(a+b)*(c+d)";
string s5="a+b*(c-d)";
string s6="a+b*c/d+e";

cout<<infx_to_posfx(s1)<<endl;
cout<<infx_to_posfx(s2)<<endl;
cout<<infx_to_posfx(s3)<<endl;
cout<<infx_to_posfx(s4)<<endl;
cout<<infx_to_posfx(s5)<<endl;
cout<<infx_to_posfx(s6)<<endl;

}