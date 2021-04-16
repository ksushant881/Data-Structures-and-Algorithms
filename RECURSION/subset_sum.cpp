#include<iostream>
#include<vector>
using namespace std;

int count(vector<int>&v,int sum,int n){

    if(n==0)
        return (sum==0)?1:0;
    return count(v,sum,n-1)+count(v,sum-v[n-1],n-1);
}

int main(){
    vector<int>v={10,20,30,40,50};
    int op=count(v,70,v.size());
    cout<<op;
}