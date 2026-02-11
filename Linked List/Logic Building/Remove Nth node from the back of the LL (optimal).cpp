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
        ListNode* fastp=head;
        ListNode* slowp=head;

        for(int i=0;i<n;i++){
            fastp=fastp->next;
        }

        if(fastp==NULL){
            return head->next;
        }

        while(fastp->next != NULL){
            fastp=fastp->next;
            slowp=slowp->next;
        }

        ListNode* delNode=slowp->next;
        slowp->next=slowp->next->next;
        free(delNode);
        return head;
    }
};