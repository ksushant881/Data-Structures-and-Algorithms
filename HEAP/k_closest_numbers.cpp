#include<bits/stdc++.h>
using namespace std;

//O(n^2) solution
void k_closest(int arr[],int n,int x,int k){
    
    bool visited[n];
    fill(visited,visited+n,false);
    for(int i=0;i<k;i++){
        int min_diff=INT_MAX;
        int min_diff_indx;
        for(int j=0;j<n;j++){
            if(visited[j] == false){
                if(abs(arr[j]-x) <= min_diff){
                    min_diff = abs(arr[j]-x);
                    min_diff_indx=j;
                }
            }

        }
        cout<<arr[min_diff_indx]<<" ";
        visited[min_diff_indx] = true;
    }
}

//using max heap
void k_closest2(int arr[],int n,int x,int k){
    priority_queue<pair<int,int>>pq;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i] = abs(arr[i] - x);
    }
    for(int i=0;i<k;i++){
        pq.push({temp[i],i});
    }
    for(int i=k+1;i<n;i++){
        if(pq.top().first > temp[i]){
            pq.pop();
            pq.push({temp[i],i});
        }
    }
    for(int i=0;i<k;i++){
        cout<<arr[pq.top().second]<<" ";
        pq.pop();
    }
}

int main(){
    int arr[]={10,30,5,40,38,80,70};
    int x=35;
    int k=3;
    int n=7;
    k_closest2(arr,n,x,k);
}