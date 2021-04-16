#include<bits/stdc++.h>
using namespace std;

int cuts(int len,int a,int b,int c,int count){
    if(len<0)
        return -1;
    if(len==0)
        return count;
        
    return max({cuts(len-a,a,b,c,count+1), cuts(len-b,a,b,c,count+1), cuts(len-c,a,b,c,count+1)});

}

int main(){
    cout<<cuts(23,12,9,11,0)<<" "<<cuts(5,2,5,1,0)<<" "<<cuts(9,2,2,2,0);
    //ans 5,2
}