#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.length();
        int n2=num2.length();
        if(n1!=n2){
            if(n1<n2){
                int s=n2-n1;
                string str="";
                for(int i=0;i<s;i++) str+='0';
                num1 = str+num1;
            }
            else{
                int s=n1-n2;
                string str="";
                for(int i=0;i<s;i++) str+='0';
                num2 = str+num2;
            }
        }
        cout<<num1<<" "<<num2<<endl;
        string res="";
        int carry=0;
        for(int i=max(n1,n2)-1;i>=0;i--){
            int a=num1[i]-48;
            int b=num2[i]-48;
            int c=a+b+carry;
            cout<<c<<endl;
            carry=c/10;
            res=to_string(c%10)+res;
            //cout<<res<<endl;
        }
        if(carry!=0){
            res=to_string(carry)+res;
        }
        return res;
    }
};

int main(){

}