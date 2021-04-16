#include<iostream>
#include<unordered_set>
using namespace std;


//naive solution
bool sumsubarray(int arr[],int n,int sum){
    int local;
    for(int i=0;i<n;i++){
        local=0;
        for(int j=i;j<n;j++){
            local+=arr[j];
            if(local==sum){
                return true;
            }
        }
    }
    return false;

}

//efficient approach using only 1 loop and hashing
bool sumsubarray2(int arr[],int n,int sum){
    int pre[n];
    unordered_set<int>s;
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
        if(s.find(pre[i]-sum)!=s.end())
            return true;
            if(pre[i]==sum)
                return true;
        s.insert(pre[i]);
    }
    return false;
    
}
int main(){
int arr[]={-3,2,1,4};
int n=5;
cout<<sumsubarray(arr,4,7);
}
