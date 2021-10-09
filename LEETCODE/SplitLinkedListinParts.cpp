#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode*temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int len=cnt/k;
        vector<ListNode*>ans;
        temp=head;
        ListNode*curr=head;
        while(temp!=NULL){
            
        }
    }
};

int main(){
    ListNode*head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    head->next->next->next->next->next=new ListNode(6);
    head->next->next->next->next->next->next=new ListNode(7);
    head->next->next->next->next->next->next->next=new ListNode(8);
    head->next->next->next->next->next->next->next->next=new ListNode(9);
    head->next->next->next->next->next->next->next->next->next=new ListNode(10);
    Solution s;
    vector<ListNode*>arr=s.splitListToParts(head,3);
}