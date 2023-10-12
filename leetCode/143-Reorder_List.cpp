#include<bits/stdc++.h>
using namespace std;

struct ListNode {               //LL def.
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next){       //default condition for 0|1 value
            return;
        }
        ListNode* mid=findmid(head);    //returns mid pointer
        ListNode* head2=reverse(mid);   //reverse the second LL and returns new head
        merge(head,head2);              //merge the two LL's
    }

    ListNode* findmid(ListNode* head){
        ListNode* prev=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;                //division
        return slow;
    }

    ListNode* reverse(ListNode* mid){       //reverse of a LL
        ListNode* prev=NULL;
        ListNode* curr=mid;
        while(curr){
            ListNode *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    void merge(ListNode* head1,ListNode* head2){    //merge LL
        while(head2){
            ListNode* next=head1->next;
            head1->next=head2;
            head1=head2;
            head2=next;
        }
    }
};