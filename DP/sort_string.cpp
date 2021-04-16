#include<bits/stdc++.h>
using namespace std;

string sort(string s){
    int  n=s.length();
    int high=n-1;
    int low=0;
    int mid=0;
    int count1=0;
    int count2=0;
    int count3=0;
    while(high >=mid){
        if(s[mid]=='('){
            swap(s[mid],s[low]);
            low++;
            mid++;
            count1++;
        }
            
        else if(s[mid] == ')'){
            swap(s[mid],s[high]);
            high--;
            //mid++;
            count2++;
        }
        else{
            mid++;
            count3++;
        }
            
            
    }
    cout<<count1<<" "<<count3<<" "<<count2<<endl;
    return s;
}

int main(){
    string s="((((()(()()()*()(((((*)()*(**(())))))(())()())(((())())())))))))(((((())*)))()))(()((*()*(*)))(*)()";
    cout << sort(s);
    // string str="abcd";
    // swap(str[0],str[3]);
    // cout<<str;
}