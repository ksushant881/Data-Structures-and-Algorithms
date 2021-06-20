#include<bits/stdc++.h>
using namespace std;



int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    
    int i = n-1;
    while(str[i] == '?' || str[i] == ' '){
        i--;
    }
    //cout<<str[i];
    if(str[i] == 'A' || str[i] == 'a' ||str[i] == 'E' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'I' ||str[i] == 'o' ||str[i] == 'O' ||str[i]== 'u' ||str[i] == 'U'||str[i] == 'y' ||str[i]== 'Y'){
        cout<<"YES";
    }
    else
        cout<<"NO";
}