#include<bits/stdc++.h>
using namespace std;

class MyCalendar {
public:
    map<int,int>mp;
    MyCalendar() {

    }
    bool book(int start, int end) {
        for(auto x:mp){
            if(!(x.first >= end || x.second <=start)){
                return false;
            }
        }
        mp[start]=end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

int main(){



}