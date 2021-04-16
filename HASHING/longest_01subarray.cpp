#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int lbs(int arr[],int n){
    int global=0;
    for(int i=0;i<n;i++){
        int count0=0,count1=0;
        for(int j=i;j<n;j++){
            int local;
            if(arr[j]==1)
                count1++;
            if(arr[j]==0)
                count0++;
            if(count1==count0){
                //cout<<i<<" "<<j<<endl;
                local=j-i+1;
            global=max(local,global);
            }      
        }
    }
    return global;
}

int lbs2(int arr[],int n){
    unordered_set<int>s;
    pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==0)
            pre[i]=pre[i-1]-1;
        else
            pre[i]=pre[i-1]+arr[i];
        if(s.find(pre[i])!=s.end()){
            
        }
        s.insert(pre[i]);
    
    }
    
    for(int i=0;i<n;i++){
        
    }
    
    for(int i=0;i<n;i++){
        if(s.find(pre[i])!=s.end()){

        }
    }

}

int main(){
    int arr[]={1,0,1,1,1,0,0};
    //cout<<lbs(arr,7);

    int arr2[]={0,0,1,1,1,1,1,0};
    cout<<lbs(arr2,8);
}