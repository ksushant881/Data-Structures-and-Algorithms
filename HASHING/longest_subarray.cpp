#include<iostream>
#include<unordered_set>
using namespace std;

int long_subarr(int arr[],int n,int sum){
    int maxx=0;
    //int local;
    for(int i=0;i<n;i++){
        int local=0;
        for(int j=i;j<n;j++){
            local+=arr[j];
            if(local==sum){
               // cout<<i<<" "<<j<<endl;
                if((j-i+1)>maxx){
                    maxx=j-i+1;
                }
            }
        }
    }
    return maxx;
}

int long_subarr2(int arr[],int n,int sum){
    int pre[n];
    int size=0;
    unordered_set<int>s;
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
        if(pre[i]==sum)
            size=max(size,i);
        if(s.find(pre[i]-sum)!=s.end())
            
        s.insert(pre[i]);
    }
}

int main(){
    int arr[]={5,8,-4,-4,9,-2,2};
    cout<<long_subarr(arr,7,0);
}