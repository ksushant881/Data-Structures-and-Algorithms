#include<iostream>
#include<stack>
using namespace std;

//stack method
string reverse1(string S) 
    { 
        string temp;
        stack<string>st;
        for(int i=0;i<S.length();i++){
            if(S[i]=='.' || i==S.length()-1){
                st.push(temp);
                temp.clear();
            }
            else
            temp+=S[i];
            
            
        }
        st.top()+=S[S.length()-1];
        string res;
        while(st.empty()==false){
            res+=st.top();
            
            st.pop();
            if(st.empty()==true)
                break;
            res+='.';
        }
        return res;
    } 


//trick method
void reverse2(string s){
    int start=0;

}

int main(){
    string str="i love coding";
    string str2="hello world i am sushant";
    reverse1(str);
}