#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

    void print(ListNode*head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
    }

class Solution {
public:
    ListNode* reverseList(ListNode*head,int c,int right,ListNode*endingListStart){
        ListNode*prev,*curr,*nxt;
        prev=endingListStart;
        curr=nxt=head;
        while(c<=right){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            c++;
        }
        head = prev;
        //print(head);
        return head;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL) return head;
        if(left == right) return head;
        ListNode*temp1,*startingListEnd,*endingListStart;
        temp1=head;
        startingListEnd=NULL;
        endingListStart=NULL;
        int c=1;

        while(1){
            if(c==left) break;
            startingListEnd = temp1;
            temp1 = temp1->next;
            c++;
        }

        ListNode*temp2=head;
        int a=1;
        while(1){
            if(a==right){
                endingListStart = temp2->next;
                break;
            }
            temp2 = temp2->next;
            a++;
        }
        
        ListNode*m = reverseList(temp1,c,right,endingListStart);
        
        if(startingListEnd == NULL) {
            head = m;
            //print(head);
            return head;
        }
        startingListEnd->next = m;
        return head;
    }
};

class Solution2{
    public:
    pair<ListNode*,ListNode*>reverseList(ListNode*temp,int currIndex,int right){
        ListNode*curr,*prev,*nxt;
        prev = NULL;
        curr=nxt=temp;
        while(currIndex<=right){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            currIndex++;
        }
        return {prev,curr};
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(right == left || head == NULL) return head;
        int currIndex=1;
        ListNode*temp=head,*prevEnd=NULL;
        while(1){
            if(currIndex == left){
                auto res = reverseList(temp,currIndex,right);
                if(left == 1) {
                    head = res.first;
                    temp->next = res.second; 
                    break;
                }
                prevEnd -> next = res.first;
                temp->next = res.second;
                if(left == 1) head = res.first;
                break;
            }
            prevEnd = temp;
            temp = temp->next;
            currIndex++;
        }
        return head;
    }
};

int main(){

ListNode*head=new ListNode(1);
head->next=new ListNode(2);
head->next->next=new ListNode(3);
head->next->next->next=new ListNode(4);
head->next->next->next->next=new ListNode(5);

Solution2 s;
//print(head);
head = s.reverseBetween(head,1,4);
cout<<"result: ";
print(head);

}