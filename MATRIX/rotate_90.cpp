#include<bits/stdc++.h>
using namespace std;
const int r=4;
const int c=4;
void rotate(int arr[r][c]){
    int temp[r][c];
    for(int i=c-1;i>=0;i--){
        for(int j=r-1;j>=0;j--){
            temp[r-1-j][c-1-i]=arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotate(arr);
}