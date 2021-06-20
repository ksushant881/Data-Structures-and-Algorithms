#include<bits/stdc++.h>
using namespace std;

    class ListNode{
        public:
        int data;
        ListNode*next;
    };
    

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
            return NULL;
        ListNode*back=head;
        ListNode*front=head;
        while(1){
            if(n==0)
                break;
            back=back->next;
            n--;     
        }
        if(back==NULL){
            head=head->next;
            return head;
        }
        
       ListNode*curr;
        while(back!=NULL){
            curr=front;
            front=front->next;
            back=back->next; 
        }
        curr->next=front->next;
        return head;
    }

int main(){

}