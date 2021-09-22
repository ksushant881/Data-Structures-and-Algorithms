#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int res=0;
    int maxLength(vector<string>& arr) {
        string str="";
        help(arr,str,0);
        return res;
    }

    void help(vector<string>&arr,string curr,int index){
        if(unique(curr)){
            res=max(res,(int)curr.length());    
        }
        if(index == arr.size() || !unique(curr)) return;
        for(int i=index;i<arr.size();i++){
            help(arr,curr+arr[i],i+1);
        }
    }

    bool unique(string s){
        set<char>st;
        for(char c:s){
            if(!st.count(c)){
                st.insert(c);
            }
            else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    vector<string>arr1={"un","iq","ue"};
    vector<string>arr2={"cha","r","act","ers"};
    vector<string>arr3={"abcdefghijklmnopqrstuvwxyz"};
    Solution s;
    cout<<s.maxLength(arr1)<<endl;
    cout<<s.maxLength(arr2)<<endl;
    cout<<s.maxLength(arr3)<<endl;
}