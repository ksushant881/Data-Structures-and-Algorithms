#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string r1;
        int i=0;
        while(num1[i]!='+'){
            r1+=num1[i];
            i++;
        }
        string r2;
        int j=0;
        while(num2[j]!='+'){
            r2+=num2[j];
            j++;
        }
        
        int rr1,rr2;
        rr1=stoi(r1);
        rr2=stoi(r2);
        
        string i1;
        i++;
        while(num1[i]!='i'){
            i1+=num1[i];
            i++;
        }
        string i2;
        j++;
        while(num2[j]!='i'){
            i2+=num2[j];
            j++;
        }
        
        int ii1,ii2;
        ii1=stoi(i1);
        ii2=stoi(i2);
        
        string res="";
        int real = rr1*rr2 - ii1*ii2;
        int img = rr1*ii2 + rr2*ii1;
        res = to_string(real) + "+" + to_string(img) + "i";
        return res;
    }
};

int main(){

}