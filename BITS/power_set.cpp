#include<bits/stdc++.h>
using namespace std;

//recursive solution
void powerSet(string s,int n,string temp=""){
    if(n==0){
        cout<<temp<<endl;
        return;
    }
    powerSet(s,n-1,temp);
    powerSet(s,n-1,temp+s[n-1]);
}

//iterative solution using bit operations
void powerSet2(string s,int n,int count){
    for(int i=0;i<count;i++){
        cout<< s & i ;
        cout<<endl;
    }
}

int main(){
    string str="abc";
    string temp;
    int n=str.length();
    int count = 2^(n) - 1;
    //powerSet(str,3,temp);
    powerSet2(str,n,count);
}