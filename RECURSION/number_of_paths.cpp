#include<iostream>
using namespace std;

int paths(int m,int n){
    if(m==1 || n==1)
        return 1;
    return paths(m-1,n)+paths(m,n-1);
}

//a matrix is input and we need to reach bottom right from top left
//we can move only down and right from each cell

int main(){
    cout<<paths(2,8);
}