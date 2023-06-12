#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class SnapshotArray1 {
public:
    vector<int>arr;
    unordered_map<int,vector<int>>mp;
    int snap_id = -1;
    SnapshotArray(int length) {
        arr = vector<int>(length,0);
    }
    
    void set(int index, int val) {
        arr[index] = val;
    }
    
    int snap() {
        snap_id++;
        mp[snap_id] = arr;
        return snap_id;
    }
    
    int get(int index, int snap_id) {
        return mp[snap_id][index];
    }
};

int main(){
    
}