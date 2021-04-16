#include<iostream>
#include<unordered_set>
using namespace std;

bool sumsubarray(int arr[],int n){
    int pre[n];
    unordered_set<int>s;
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
        if(s.find(pre[i])!=s.end())
            return true;
            if(pre[i]==0)
                return true;
        s.insert(pre[i]);
    }
    return false;
    
}
int main(){
int arr[]={-3,2,1,4};
int n=5;
cout<<sumsubarray(arr,4);
}
