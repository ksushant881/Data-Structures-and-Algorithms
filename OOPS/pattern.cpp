#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>arr){
    int x,y;
    int n=arr.size();
    x=n-1;
    y=0;
    int k=3;
    cout<<arr[x][y]<<endl;
    while(k--){
        if(x == n-1) y++;
        while(x >= 0 && y >= 0){
            cout<<arr[x][y]<<endl;
            x--;
            y--;
        }
        if(y == -1 && x!=-1) y++;
        if(x == -1) { y+=2; x=0; }
        while(x <= n-1 && y <= n-1){
            cout<<arr[x][y]<<endl;
            x++;
            y++;
        }
        if(x == n) {x--; y--;}
        if(y == n) { x-=2; y--;}
    }
}

void print2(vector<vector<int>>arr){
    int n=arr.size();
    int x=n-1;
    int y=0;
}

int main(){
    vector<vector<int>>arr{
      {10,11,12,13},
      {20,21,22,23},
      {30,31,32,33},
      {40,41,42,43}  
    };
    print(arr);
}