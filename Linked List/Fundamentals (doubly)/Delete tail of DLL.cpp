/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode* deleteTail(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return nullptr;

        ListNode* tail=head;
        while(tail->next != nullptr){
            tail=tail->next;
        }
        ListNode* newTail=tail->prev;
        newTail->next=nullptr;
        tail->prev=nullptr;
        delete tail;
        return head;
    }
};