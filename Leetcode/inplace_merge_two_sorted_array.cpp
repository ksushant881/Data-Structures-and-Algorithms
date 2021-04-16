#include<bits/stdc++.h>
using namespace std;

//without using extra space 
//idea is to iterate from back of larger array that we have to modify
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=m-1;
        int b=n-1;
        int c=m+n-1;
        while(a>=0 && b>=0){
            if(nums1[a]<nums2[b]){
                nums1[c]=nums2[b];
                b--;
                c--;
            }
            else
            {
                nums1[c]=nums1[a];
                a--;
                c--;
            }
        }
        while(b>=0){
            nums1[c]=nums2[b];
            c--;
            b--;
        }
    }

int main(){

}