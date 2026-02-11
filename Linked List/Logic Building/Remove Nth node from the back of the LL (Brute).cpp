/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;

        int count=0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
        temp=temp->next;
        }

        if(count==n){
            ListNode* newHead= head->next;
            free(head);
            return newHead;
        }

        int res = count - n;
        temp=head;
        while(temp != NULL){
            res--;
            if(res==0) break;
            temp=temp->next;
        }

        ListNode* delNode = temp->next;
        temp->next=temp->next->next;
        free(delNode);
        return head;
    }
};