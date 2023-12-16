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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode *curr=head;
        while(curr!=NULL){
            cnt++;
            curr=curr->next;
        }
        curr=head;
        for(int i=0;i<cnt/2;i++){
            curr=curr->next;
        }
        return curr;
    }
};