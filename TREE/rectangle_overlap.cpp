#include<bits/stdc++.h>
using namespace std;

bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[0]==rec1[2] || rec1[1]==rec1[3])
            return false;
        if(rec2[0]==rec2[2] || rec2[1]==rec2[3])
            return false;
        
        if(rec2[0]<rec1[2] && rec2[1]<rec1[3] && rec2[2]>rec1[0] && rec2[3]>rec1[1])
            return true;
    return false;
    }

int main(){
    vector<int>rec1={-1,0,1,1};
    vector<int> rec2={0,-1,0,1};
    cout<<isRectangleOverlap(rec1,rec2);
}