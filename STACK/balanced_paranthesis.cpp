#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isBalanced(string str){
    stack<int>st;
    for(int i=0;i<str.length();i++){
        if(str[i]=='{'||str[i]=='['||str[i]=='('){
            st.push(str[i]);
        }
        else{
            if(st.empty()==true)
                return false;
            else if((str[i]==')' && st.top()=='(') || (str[i]=='}' && st.top()=='{') || (str[i]==']' && st.top()=='['))
                st.pop();
            else
                return false;
            
        }
    }
    return st.empty();
}


int main(){
    string s="[{}[]]";
    cout<<isBalanced(s);
}