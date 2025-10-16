/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* deleteNodeWithValueX(ListNode* &head, int val) {
        if(head==nullptr) return head;
        while(head!=nullptr && head->val==val){
            head=head->next;
        }
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp != nullptr){
            if(temp->val==val){
                prev->next=temp->next;
                free(temp);
            }
            else{
                prev=temp;
            }
            temp=temp->next;
        }
        return head;
    }
};