#include<iostream>
#include<unordered_set>
using namespace std;

pair<int,int> pair1(int arr[],int n,int x){
    pair<int,int>out;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                out={arr[i],arr[j]};
                return out;
            }
        }
    }
}

//hashing better when unsorted array
pair<int,int> pair2(int arr[],int n,int x){
    pair<int,int>out;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    for(int i=0;i<n;i++){
        if(s.find(x-arr[i])!=s.end()){
            out={arr[i],x-arr[i]};
            return out;
        }
    }
}

//for sorted array go for two pointer approach
pair<int,int> pair3(int arr[],int n,int x){
    pair<int,int>o;
    int front=0;
    int last=n-1;
    int sum=0;
    while(last>=front){
        sum=arr[front]+arr[last];
        if(sum==x)
            break;
        else if(sum>x)
            last--;
        else
            front++;
    }
    cout<<sum<<endl;;
    o.first=arr[front];
    o.second=arr[last];
    return o;
}


int main(){
    int arr[]={3,5,9,2,8,10,11};
    pair<int,int>o=pair3(arr,7,17);
    cout<<o.first<<" "<<o.second;
}