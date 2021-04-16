#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;

void remove_duplicate(int *arr,int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    arr[n]={0};
    cout<<s.size();

}

//extra space solution
void remove_duplicate2(int *arr,int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

//efficient solution
void remove_duplicate3(int *arr,int n){
    int index=1;
    int count=0;

    for(int i=1;i<=n;i++){
        if(arr[i]!=arr[index-1]){
            arr[index]=arr[i];
            index++;
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,5,7,34,34};
    sort(arr,arr+5);
    remove_duplicate3(arr,6);
}