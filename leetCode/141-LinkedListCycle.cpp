#include<bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  
};

class Solution {
public:
    bool hasCycle(ListNode *head){
        if(head==NULL || head->next==NULL){       //default condition
            return false;
        }
        ListNode *slow=head;            //slow pointer
        ListNode *fast=head->next;      //fast pointer
        while(fast!=NULL && fast->next!=NULL){      //fast pointer condition for traversal
            if(slow==fast){             //loop found
                return true;
            }
            else{                       //traversal
                slow=slow->next;
                fast=fast->next->next;
            }
        }
        return false;                   //loop not found
    }
};