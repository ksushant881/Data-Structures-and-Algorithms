#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

void dist(int arr[],int n,int k){
    for(int i=0;i<=n-k;i++){
        unordered_set<int>s;
        for(int j=i;j<i+k;j++){
            s.insert(arr[j]);
        }
        cout<<s.size()<<" ";
        s.clear();
    }
}

//efficient solution
void dist2(int arr[],int n,int k){
    unordered_map<int,int>m;
    for(int j=0;j<k;j++){
        m[arr[j]]++;
    }
    cout<<m.size()<<" ";
    for(int i=k;i<n;i++){
        m[arr[i-k]]--;
        if(m[arr[i-k]]==0)
            m.erase(arr[i-k]);
        m[arr[i]]++;
        cout<<m.size()<<" ";
    }
}

int main(){
    int arr[]={10,20,20,10,30,40,10};
    int k=4;
    dist2(arr,7,4);
    int arr2[]={10,10,10,10};
    int k2=3;
    //dist2(arr2,4,k2);
}