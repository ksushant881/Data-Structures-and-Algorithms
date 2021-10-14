#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

//0xAAAAAAAA means 10101010101010101010101010101010 in binary.
//we get all even bits of n.
const unsigned int ev=0xAAAAAAAA;
//0x55555555 means 01010101010101010101010101010101 in binary.
//we get all odd bits of n.
const unsigned int od=0x55555555;
void solve(){

}

void changeCol(int *arr[],int x,int y,int n,int m){
    for(int i=0;i<n;i++){
        swap(arr[i][x-1],arr[i][y-1]);
    }
}
void changeRow(int *arr[],int x,int y,int n,int m){
    for(int i=0;i<m;i++){
        swap(arr[x-1][i],arr[y-1][i]);
    }
}
void getNum(int *arr[],int x,int y){
    cout<<arr[x-1][y-1]<<endl;
}
int main(){
fastio

int n,m;
cin>>n>>m;
int k;
cin>>k;
int *arr[n];
f(i,n) {
    arr[i] = (int*)malloc(4*m);
    f(j,m) cin>>arr[i][j];
}
f(i,k){
    char c;
    cin>>c;
    int x,y; cin>>x>>y;
    switch(c){
        case 'c':
            changeCol(arr,x,y,n,m);
            break;
        case 'r':
            changeRow(arr,x,y,n,m);
            break;
        case 'g':
            getNum(arr,x,y);
            break;
    }
}




}