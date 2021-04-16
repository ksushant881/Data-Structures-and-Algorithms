#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool pal(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            return false;
    }
    return true;
}

bool pal2(string s){
    string rev=s;
    reverse(rev.begin(),rev.end());
    return (rev==s);
}

int main(){
    string s="ABCDCBA";
    cout<<pal2(s);

}