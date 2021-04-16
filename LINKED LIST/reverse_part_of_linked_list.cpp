#include<bits/stdc++.h>
using namespace std;

class ListNode{
        public:
        int data;
        ListNode*next;
        ListNode(int x){
            data=x;
            next=NULL;
        }
    };

ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        
        ListNode*l=head;
        for(int i=0;i<left;i++)
            l=l->next;
        
        ListNode*r=head;
        for(int i=0;i<right;i++)
            r=r->next;
        
        
        ListNode*prev=r->next;
        ListNode*curr=l;
        ListNode*front=l;
        while(front != r->next){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }

        return head;
    }

    void traverse2(ListNode*head){
    if(head==NULL)
        return;
    cout<<head->data<<" -> ";
    traverse2(head->next);
}

int main(){
    ListNode*head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
     traverse2(head);
     cout<<endl;
    //head->next->next->next->next->next=new ListNode(30);
    ListNode*res=reverseBetween(head,2,4);
    traverse2(head);
}