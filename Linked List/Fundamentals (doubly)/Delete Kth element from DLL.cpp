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
    ListNode* deleteKthElement(ListNode* head, int k) {
        if(head==nullptr) return nullptr;

        ListNode* Traverse=head;
        int count=0;
        while(Traverse != nullptr){
            count++;
            if(count==k){
                break;
            }
            Traverse=Traverse->next;
        }

        if(Traverse==nullptr) return nullptr;

        ListNode* front=Traverse->next;
        ListNode* back=Traverse->prev;

        if(front==nullptr && back==nullptr){
            delete Traverse;
            return nullptr;
        }
        else if(back==nullptr){
            head=front;
            front->prev=nullptr;
        }
        else if(front==nullptr){
            back->next=nullptr;
        }
        else{
            back->next=front;
            front->prev=back;
        }

        delete Traverse;
        return head;
    }
};