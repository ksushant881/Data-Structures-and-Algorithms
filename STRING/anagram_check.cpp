#include<iostream>
using namespace std;

//naive solution
bool isAna(string txt,string pat,int index){
    int count[256];
    fill(count,count+256,0);
    for(int i=0;i<pat.length();i++){
        count[txt[index+i]]++;
        count[pat[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0)
            return false;
    }
    return true;
}

bool present(string txt,string pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=n-m;i++){
        if(isAna(txt,pat,i)==true)
            return true;
        
    }
    return false;
}

//better solution
bool areSame(int arr1[],int arr2[]){
    for(int j=0;j<256;j++){
            if(arr1[j]!=arr2[j])
               return false;
        }
        return true;
}
bool isAnagram(string txt,string pat){
    int PC[256]={0};
    int TC[256]={0};
    for(int i=0;i<pat.length();i++){
        TC[txt[i]]++;
        PC[pat[i]]++;
        
    }
    for(int i=pat.length();i<txt.length();i++){
        if(areSame(PC,TC))
            return true;
        TC[txt[i]]++;
        TC[txt[i-pat.length()]]--;
        
    }
    return false;
}




int main(){
    string s1="geeksforgeeks";
    string s2="frog";
    cout<<isAnagram(s1,s2);
}