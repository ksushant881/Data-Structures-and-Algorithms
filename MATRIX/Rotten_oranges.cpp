#include<iostream>
using namespace std;
const int R=3;
const int C=5;

bool isSafe(int i,int j){
    if(i>=0 && i<R && j>=0 && j<C)
        return true;
    else
        return false;
}

int rot(int v[][C]){
    bool changed=false;
    while(true){
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(v[i][j]==2){
                    if(isSafe(i+1,j) && v[i+1][j]==1){
                        v[i+1][j]=v[i][j]+1;
                        changed=true;
                    }
                }
            }
        }
    }
}


int main(){
    int v[R][C] = { { 2, 1, 0, 2, 1 },
                    { 1, 0, 1, 2, 1 },
                    { 1, 0, 0, 2, 1 } };

}