#include<bits/stdc++.h>
using namespace std;

struct ListNode {                       //LL def.
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode;                //dummy pointer 
        dummy->next=head;           
        ListNode* fast=head;            //Two pointer approach
        ListNode* slow=dummy;           //to reduce one step
        for(int i=0;i<n;i++){           //fast n+1 steps ahead
            fast=fast->next;
        }   
        if(fast==NULL){                 //default condition
            head=head->next;
        }      
        while(fast!=NULL){              //slow is taken to just before the req. node
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;    //updation of LL
        return head;
    }
};