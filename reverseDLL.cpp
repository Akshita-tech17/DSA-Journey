
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        ListNode*curr=head;
        ListNode*previous=NULL;
        while(curr!=NULL){
            ListNode*forward=curr->next;
            curr->next=previous;
            curr->prev=curr->next;
            previous=curr;
            curr=forward;
        }
        return previous;
    }
};