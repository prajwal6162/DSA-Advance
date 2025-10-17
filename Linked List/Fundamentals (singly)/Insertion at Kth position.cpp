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
    ListNode* insertAtKthPosition(ListNode* &head, int X, int K) {
        if(head==nullptr){
            if(K==1){
                return new ListNode(X);
            }
            else return head;
        }

        if(K==1){
            return new ListNode(X, head);
        }

        int count=0;
        ListNode* temp=head;
        while(temp != nullptr){
            count++;
            if(count==K-1){
                ListNode* add= new ListNode(X, temp->next);
                temp->next=add;
                break;
            }
            temp=temp->next;
       }
       return head;
    }
};