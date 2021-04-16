#include<iostream>
using namespace std;

void snake(int arr[4][4]){
    bool row=false;
    for(int i=0;i<4;i++){
        if(row==false){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        row=!row;
        }
        else{
           for(int j=3;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        row=!row;
        } 
        }
    }

    void snake2(int arr[4][4]){
        for(int i=0;i<4;i++){
            if(i%2==0){
                for(int j=0;j<4;j++){
                    cout<<arr[i][j]<<" ";
                }
            }
            else {
                for(int j=3;j>=0;j--){
                    cout<<arr[i][j]<<" ";
                }
            }
        }
    }



int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    snake2(arr);
}