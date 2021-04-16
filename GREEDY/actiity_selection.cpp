#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    return (a.second<b.second);
}

int activity(pair<int,int>arr[],int n){
   sort(arr,arr+n,cmp);
   int res=1;
   int prev=0;
   for(int i=1;i<n;i++){
       if(arr[i].first>=arr[prev].second){
        res++;
        prev=i;
       }
   }
   return res;   
}

int main(){
    pair<int,int>arr[]={{12,25},{10,20},{20,30}};
    cout<<activity(arr,3);
}