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
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
        if(K==1){
            ListNode* newHead = new ListNode(X, head, nullptr);
            head->prev= newHead;
            head=newHead;
            return head;
        }

        ListNode* temp = head;
        int count=0;
        while(temp != nullptr){
            count++;
            if(count == K) break;
            temp=temp->next;
        }
        ListNode* prev = temp->prev;
        ListNode* newNode = new ListNode(X, temp, prev);

        prev->next=newNode;
        temp->prev=newNode;

        return head;
    }
};