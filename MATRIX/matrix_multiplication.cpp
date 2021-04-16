#include<bits/stdc++.h>
using namespace std;

int mul(int mat1[][3],int mat2[][2],int r1, int c1, int r2,int c2){
    if(c1!=r2)
        return 0;
    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum=0;
            for(int k=0;k<c1;k++){
                sum+=mat1[i][k]*mat2[k][j];
            }
            res[i][j]=sum;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    int mat1[2][3]={
        {2,4,6},
        {3,9,4}
    };
    int mat2[3][2]={
        {3,4},
        {6,5},
        {0,0}
    };
    mul(mat1,mat2,2,3,3,2);
   
}