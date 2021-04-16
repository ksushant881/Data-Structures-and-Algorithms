#include<iostream>
#include<unordered_set>
using namespace std;

int intersection(int a[],int b[],int n1,int n2){
    int count=0;
    for(int i=0;i<n1;i++){
        bool flag=false;
        for(int j=0;j<i-1;j++){
            if(a[i]==a[j]){
                flag=true;
                break;
            }
        }
        if(flag==true){
            continue;
        }
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" "<<b[j]<<endl;
                count++;
                break;
            }
        }
    }
    return count;
}

int intersection2(int a[],int b[],int n1,int n2){
    unordered_set<int>s;
    for(int i=0;i<n1;i++){
        s.insert(a[i]);

    }

    int count=0;
    for(int i=0;i<n2;i++){
        if(s.find(b[i])!=s.end()){
            count++;
            cout<<b[i]<<" ";
            s.erase(b[i]);

        }
    }
    return count;
}

int main(){
    int a[]={5,4,2,9,5,2};
    int b[]={5,9,6,7};
    cout<<intersection2(a,b,6,4);
}