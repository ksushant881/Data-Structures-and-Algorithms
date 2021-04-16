#include<iostream>
#include<vector>
using namespace std;

void commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
    vector<int>v;
    int i=0,j=0,k=0;
    int last=-9999;
    while(i<n1 && j<n2 && k<n3){
        if((A[i]==B[j]) && (A[i]==C[k]) && A[i]!=last){
            v.push_back(A[i]);
            last=A[i];
            i++;
            j++;
            k++;
        }
        else if(min(A[i],B[j],C[k])==A[i])
            i++;
        else if(min(A[i],B[j],C[k])==B[j])
            j++;
        else
            k++;
    }
    for(int i=0;i<v.size();i++)
         cout<<v[i]<<" ";
    
}


int main(){
    int A[]={1,5,10,20,40,80};
    int B[]={6,7,20,80,100};
    int C[]={3,4,15,20,30,70,80,120};
    int n1=6,n2=5,n3=8;
    commonElements(A,B,C,n1,n2,n3);
   

}