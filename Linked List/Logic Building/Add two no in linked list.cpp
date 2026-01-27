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
        ListNode* addTwoNumbers(ListNode* &L1, ListNode* &L2) {
            //your code goes here

            ListNode *dummy= new ListNode();

            ListNode *temp = dummy;
            int carry = 0;

            while((L1 != nullptr || L2 != nullptr) || carry){
                int sum = 0;

                if(L1 != nullptr){
                    sum+= L1->data;
                    L1=L1->next;
                }

                if(L2 != nullptr){
                    sum+= L2->data;
                    L2=L2->next;
                }

                sum+=carry;
                carry= sum/10;

                ListNode *node = new ListNode(sum%10);
                temp->next=node;

                temp=temp->next;
            }
            return dummy->next;
        }
};