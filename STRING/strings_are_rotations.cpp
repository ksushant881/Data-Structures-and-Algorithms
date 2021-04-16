#include<iostream>
using namespace std;

bool isRotation(string s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    return ((s1+s1).find(s2)!=string::npos);

}

int main(){
    string s="ABCD";
    string k="CDAB";
    cout<<isRotation(s,k);
}