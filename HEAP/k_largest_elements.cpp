#include<bits/stdc++.h>
using namespace std;

//O(n + klogn)
//using max heap
void kLargest(int arr[],int n,int k){
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    while(k!=0){
        cout<<pq.top()<<" ";
        pq.pop();
        k--;
    }
}

//using min heap
void kLargest2(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k+1;i<n;i++){
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    for(int i=0;i<k;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}



int main(){
    int arr[]={8,6,4,8,9,10};
    kLargest2(arr,6,3);
}