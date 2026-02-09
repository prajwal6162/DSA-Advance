/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* oddEvenList(ListNode* &head) {
            if (!head || !head->next)
            return head;
            
            ListNode* odd=head;
            ListNode* even=head->next;
            ListNode* firsteven=head->next;

            while(even != nullptr && even->next != nullptr){
                odd->next=odd->next->next;
                even->next=even->next->next;
                odd=odd->next;
                even=even->next;
            }

            odd->next=firsteven;
            return head;
        }
};