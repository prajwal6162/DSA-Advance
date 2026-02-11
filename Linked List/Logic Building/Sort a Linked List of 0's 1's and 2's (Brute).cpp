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
        ListNode* sortList(ListNode* &head) {
            if(!head || !head->next) return head;
            int c0=0, c1=0, c2=0;
            ListNode* temp=head;
            while(temp!=nullptr){
                if(temp->data==0){
                    c0++;
                }
                else if(temp->data==1){
                    c1++;
                }
                else if(temp->data==2){
                    c2++;
                }
                temp=temp->next;
            }

            temp=head;
            while(temp!=nullptr){
                if(c0>0){
                    temp->data=0;
                    c0--;
                }
                else if(c1>0){
                    temp->data=1;
                    c1--;
                }
                else if(c2>0){
                    temp->data=2;
                    c2--;
                }
                temp=temp->next;
            }
            return head;
        }
};