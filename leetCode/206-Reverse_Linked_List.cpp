#include<bits/stdc++.h>
using namespace std;

struct ListNode {               //linked list definition
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;        //took 3 pointers 
        ListNode* curr=head;
        ListNode* next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        head=prev;
        return head;
    }
};