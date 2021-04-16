#include<iostream>
using namespace std;

int sum(int arr[],int n,int a,int b)
{   int sum=0;
    for(int i=a;i<=b;i++){
        sum+=arr[i];
    }
    return sum;
}
//efficient approach using preprocessing of prefix sum
//this is just to find sumof elements in given range

int sum2(int arr[],int n,int a,int b){
    int *pre=new int[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }
    int sum=0;
    if(a!=0)
    sum=pre[b]-pre[a-1];
    else
    sum=pre[b];
    return sum;
}


//problem statement is to find equillibrium point 
//sum of elements to right and left is equal

bool eqPt(int arr[],int n){
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int rsum=sum;
    int lsum=0;
    for(int i=0;i<n;i++){
         rsum=rsum-arr[i];
        if(rsum==lsum){
            cout<<i<<endl;
            return true;
            
        }
        lsum=lsum+arr[i];
        //cout<<lsum<<" "<<rsum<<endl;
       
    }
    return false;
}

//max freq. element in ranges problem

int freq(int l[],int r[],int n){
    int f[1000]={0};
    for(int i=0;i<n;i++){
        f[l[i]]++;
        f[r[i]+1]--;
    }
    int max=f[0];
    int num;
    for(int i=1;i<1000;i++){
        f[i]=f[i]+f[i-1];
        if(f[i]>max){
            max=f[i];
            num=i;
        }
    }
    return num;

}


//divide array in 3 parts with same sum
bool three_parts(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%3!=0){
        return false;
    }
    int small=sum/3;
    int count=0;
    int local=0;
    for(int i=0;i<n;i++){
        local+=arr[i];
        if(local==small){
            count++;
            local=0;
            cout<<i<<endl;
        }
    }
    if(count==3){
        return true;
    }
    else{
        return false;
    }
}

// bool subsum(int arr[],int n){
//     for(int i=0;i<n;i++){
//         sum+=
//     }
// }


int main(){
//     int l[]={1,2,5,15};
//     int r[]={5,8,7,18};
//    // int n=5;
//     cout<<freq(l,r,4);
        int arr[]={0,2,0,1,-6,6,-7,9,1,2,0,1};
        cout<<three_parts(arr,12);

}