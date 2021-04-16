#include<iostream>
using namespace std;


//naive solution
int sqroot(int x){
    int root=0;
    for(int i=2;;i++){
        if(i*i>x)
            break;
        root=i;
    }
    return root;
}

//binary search solution

int root(int x){
    if(x==0)
        return 0;
    int high=x;
    int low=1;
    int mid;
    while(high>=low){
        mid=(high+low)/2;
        if(mid*mid==x)
            return mid;
        else if(mid*mid>x)
            high=mid-1;
        else 
            low=mid+1;
    }
    return mid-1;
}

int main(){
    int x=10;
    cout<<root(x);
}
