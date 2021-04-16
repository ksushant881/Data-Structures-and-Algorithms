#include<iostream>
#include<algorithm>
using namespace std;

bool anagram(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);

}

bool anagram2(string s1,string s2){
    int arr[256]={0};
    
    if(s1.length()!=s2.length())
        return false;
    for(int i=0;i<s1.length();i++){
        arr[s1[i]]++;
        arr[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0)
            return false;
    }
    return true;
}

int main(){
    string str1="listen";
    string str2="silenm";
    cout<<anagram2(str1,str2);
}