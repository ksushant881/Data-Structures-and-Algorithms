#include<iostream>
#include<unordered_set>
using namespace std;

void dist(int *arr,int n){
    

}

int dist2(int *arr,int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();

}

int dist3(int *arr,int n){
    unordered_set<int>s(arr,arr+n);
    return s.size();
}