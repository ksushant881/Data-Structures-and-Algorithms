#include<iostream>
using namespace std;

int floor(float x){
    //int k=int(x);
    return x/1;
}

class minheap{
    public:
    int *arr;
    int size;
    int capacity;

    minheap(int k){
        capacity=k;
        size=0;
        arr=new int[k]; 
        
    }
    int left(int x){
        return 2*x+1;
    }
    
    int right(int x){
        return 2*x+2;
    }

    int parent(int x){
        return floor((x-1)/2);
    }
    //O(log(size of array))
    void insert(int *arr,int num){
    if(size==capacity){
        cout<<"HEAP FULL";
        return;
    }
        else{
            size++;
            arr[size-1]=num;
            
            for(int i=size-1;arr[parent(i)]>num && i!=0;){
                swap(arr[size-1],arr[parent(i)]);
                i=parent(i);
            }
        }
    
}
//O(logn) complexity
void minheapify(int i){
    int lt=left(i);
    int rt=right(i);
    int smallest=i;

    if(lt<size && arr[lt]<arr[smallest])
        smallest=lt;

    if(rt<size && (arr[rt]< arr[smallest]))
        smallest=rt;

    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        minheapify(smallest);

    }


}
int getmin(){
    return arr[0];
}

int extractMin(){
    if(size==0)
        return INT64_MIN;
    if(size==1){
        size--;
        return arr[size];
    swap(arr[size-1],arr[0]);
    size--;
    minheapify(0);
    return arr[size];
    }

}


void decreaseKey(int i,int y){
    arr[i]=y;

    for(;i!=0; && arr[parent(i)]>y;){
        swap(arr[parent(i)],arr[i]);
        i=parent(i);
    }
}

void delete(int i){ 
    decreasekey(i,INT64_MIN);
    extractMin();
}

void build(int a[],int n){
    for(int i=(parent(n-1));i>=0;i--){
        minheapify(i);
    }
}

};

