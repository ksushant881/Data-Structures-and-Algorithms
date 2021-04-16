#include<iostream>
using namespace std;

int floor(float x){
    return x/1;
}
class maxHeap{
    public:
    int *arr;
    int size;
    int capacity;

    int left(int i){
        return 2*i+1;
    }

    int right(int i){
        return 2*i+2;
    }

    int parent(int i){
        return floor((i-1)/2);
    }

    maxHeap(int k){
        capacity=k;
        
        arr=new int[k];
        size=0;
    }
    void insert(){

    }

    void heapify(int i){
        int lt=left(i);
        int rt=right(i);
        int largest=i;

        if(lt<size && arr[lt]>arr[i]){
            largest=lt;
        }
        if(rt<size && arr[rt]>arr[i]){
            largest=rt;
        }
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(largest);
        }
    }

    void buildmaxheap(){
        for(int i=parent(size-1);i>=0;i--){
            heapify(i);
        }
    }

    void heapSort(){
        buildmaxheap();
        for(int i=size-1;i>=0;i--){
            swap(arr[i],arr[0]);
            heapify(0);
        }

    }


};

void selectionSort(int *arr,int n){
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    maxHeap mxh(5);
    
    int a[5]={2,5,1,8,0};
    mxh.arr=a;
    mxh.heapify(0);
    
    
    
    for(int i=0;i<5;i++){
        cout<<mxh.arr[i]<<" ";
    }
}