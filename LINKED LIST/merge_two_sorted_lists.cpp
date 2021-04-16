#include<bits/stdc++.h>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
    ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

    //naive approach
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*head;
        ListNode*temp1,*temp2;
        temp1=l1;
        temp2=l2;
        vector<int>v;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val > temp2->val){
                v.push_back(temp2->val);
                temp2=temp2->next;
            }
            else if(temp1->val < temp2->val){
                v.push_back(temp1->val);
                temp1=temp1->next;
            }
        
        }
         while(temp1!=NULL){
             v.push_back(temp1->val);
                temp1=temp1->next;
         }
        while(temp2!=NULL){
             v.push_back(temp2->val);
                temp2=temp2->next;
         }
        ListNode*temp=new ListNode(v[0]);
        ListNode*res=temp;
        for(int i=1;i<v.size();i++){
            ListNode*node=new ListNode(v[i]);
            temp->next=node;
            temp=node;
        }
        return res;
    }

    //some optimazation
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*head=new ListNode(0);
        ListNode*res=head;
        ListNode*temp1,*temp2;
        temp1=l1;
        temp2=l2;
        vector<int>v;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val > temp2->val){
                ListNode*temp=new ListNode(temp2->val);
                res->next=temp;
                res=temp;
                temp2=temp2->next;
            }
            else if(temp1->val <= temp2->val){
               ListNode*temp=new ListNode(temp1->val);
                res->next=temp;
                res=temp;
                temp1=temp1->next;
            }
        
        }
         while(temp1!=NULL){
             ListNode*temp=new ListNode(temp1->val);
                res->next=temp;
                res=temp;
                temp1=temp1->next;
         }
        while(temp2!=NULL){
             ListNode*temp=new ListNode(temp2->val);
                res->next=temp;
                res=temp;
                temp2=temp2->next;
         }
        
        return head->next;
    }

    //recursive solution best
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val > l2->val){
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }
        else{
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
    }

int main(){
        


}