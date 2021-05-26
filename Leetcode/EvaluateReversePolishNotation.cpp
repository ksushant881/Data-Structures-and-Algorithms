#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int>st;
        int n=s.size();
        int x=0,y=0;
        for(int i=0;i<n;i++){
            
            if(s[i]=="+"){
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(x+y);
            }
            else if(s[i]=="-"){
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(y-x);
            }
            else if(s[i]=="*"){
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(x*y);
            }
            else if(s[i]=="/"){
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                st.push(y/x);
            }
            else{
                stringstream ss(s[i]);
                int curr;
                ss>>curr;
                st.push(curr);
            }
        }
        return st.top();
    }
};

int main(){

vector<string>tokens1={"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
vector<string>tokens2={"4","13","5","/","+"};
vector<string>tokens3={"2","1","+","3","*"};

Solution s;
cout<<s.evalRPN(tokens1)<<endl;
cout<<s.evalRPN(tokens2)<<endl;
cout<<s.evalRPN(tokens3)<<endl;


}