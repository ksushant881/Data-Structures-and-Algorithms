#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std;

//O(nlogn) solution using sorting
int lcs(int arr[],int n){
    sort(arr,arr+n);
    int count=1;
    int global=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]==arr[i]+1){
            count++;
        }
        else{
            count=1;
        }
        if(count>global){
            global=count;
        }
    }
    return global;
}



//efficient solution
int lcs2(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int count=1;
    int global=1;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end()){
            count=1;
        }
        else{
            while(s.find(arr[i]+count)!=s.end()){
                count++;
            }
        }
        global=max(global,count);
    }
    return global;
}


int main(){
    int arr[]={3,8,4,5,7};
    cout<<lcs2(arr,5);
}