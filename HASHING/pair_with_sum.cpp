#include<iostream>
#include<unordered_set>
using namespace std;
//O(n^2)
bool issum(int arr[],int n,int sum){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum)
                return true;
        }
    }
    return false;
}

//O(n) using hashmap and some logic
bool issum2(int arr[],int n,int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])==s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;

}

int main(){
    int arr[]={2,3,5,15,-8};
    cout<<issum(arr,5,7);
}