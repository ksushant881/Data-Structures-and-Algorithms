#include<iostream>
#include<unordered_set>

using namespace std;

int dist(int a[],int b[],int n1,int n2){
    unordered_set<int>s;
    for(int i=0;i<n1;i++){
        s.insert(a[i]);
    }
    
    for(int i=0;i<n2;i++){
        s.insert(b[i]);
    }
    return s.size();
}

int main(){
    int a[]={15,20,5,15};
    int b[]={15,15,15,20,10};
    cout<<dist(a,b,4,5);
}