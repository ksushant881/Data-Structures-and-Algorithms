#include<iostream>
using namespace std;
const int R=6;
const int C=1;
void boundary(int arr[R][C]){
    if(R==1){
        for(int i=0;i<C;i++)
            cout<<arr[R-1][i]<<" ";
            return;
    }
    else if(C==1){
        for(int i=0;i<R;i++)
            cout<<arr[i][C-1]<<" ";
            return;
    }
    else{

    for(int i=0;i<C;i++)
        cout<<arr[0][i]<<" ";
    for(int i=1;i<=R-1;i++)
        cout<<arr[i][C-1]<<" ";
    for(int i=C-2;i>=0;i--)
        cout<<arr[R-1][i]<<" ";
    for(int i=R-2;i>=1;i--)
        cout<<arr[i][0]<<" ";
    }
}

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int arr2[6][1]={15,4,5,2,8,9};
    
    boundary(arr2);
}