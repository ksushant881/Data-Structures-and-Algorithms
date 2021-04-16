#include<bits/stdc++.h>
using namespace std;

//naive solution
void flips(int arr[],int n){

  int g0=0;
  int g1=0;
  for(int i=0;i<n;i++){
      if(arr[i]==1){
          int j=i;
          g1++;
          while(arr[j]==1){
             
              j++;
          }
          i=j-1;
      }
      else if(arr[i]==0){
          int j=i;
          g0++;
          while(arr[j]==0){
             
              j++;
          }
          i=j-1;
      }
  }
  
      if(g1>g0){
          for(int i=0;i<n;i++){
              if(arr[i]==0)
                arr[i]=1;
      }
  }
  else{
      for(int i=0;i<n;i++){
              if(arr[i]==1)
                arr[i]=0;
      }
  }

}

//cool solution
void flips2(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0])
                cout<<"From "<<i<<" to ";
            else
                cout<<i-1<<endl;
        }
    }
    if(arr[n-1]!=arr[0])
        cout<<n-1<<endl;

}

int main(){
    int arr[]={1,0,0,0,1,0,0,1,1,1,1};
    flips2(arr,11);
     for(int i=0;i<11;i++)
            cout<<arr[i]<<" ";
}