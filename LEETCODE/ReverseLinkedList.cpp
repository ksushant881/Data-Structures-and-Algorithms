#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr,*prev,*forw;
        curr = forw = head;
        prev=NULL;
        while(curr != NULL){
            forw = forw -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
};

int main(){

}