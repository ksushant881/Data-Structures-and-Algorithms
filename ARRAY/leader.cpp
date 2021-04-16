#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//O(n^2) solution
void leaders(vector<int>v){
    bool flag;
    for(int i=0;i<v.size();i++){
        flag=true;
        for(int j=i;j<v.size();j++){
            if(v[j]>=v[i]){
                flag=false;
                break;
            }
            
        }
        if(flag){
            cout<<v[i]<<" ";
        }
        
    }
}

//O(n) solution
void leaders2(vector<int>v){
    int curr=v[v.size()-1];
    stack<int>s;
    s.push(curr);
    for(int i=v.size()-2;i>=0;i--){
        
        if(v[i]>curr){
            
            curr=v[i];
            s.push(curr);
        }
    }
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    vector<int>arr={1,5,3,8,9,4};
    leaders2(arr);
}