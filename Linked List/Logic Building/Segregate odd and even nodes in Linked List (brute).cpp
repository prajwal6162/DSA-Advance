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
            if(head==nullptr || head->next==nullptr) return head;
            vector<int> ans;
            ListNode* temp=head;
            while(temp != nullptr && temp->next != nullptr){
                ans.push_back(temp->data);
                temp=temp->next->next;
            }
            if(temp) ans.push_back(temp->data);

            ListNode* curr=head->next;
            while(curr != nullptr && curr->next != nullptr){
                ans.push_back(curr->data);
                curr=curr->next->next;
            }
            if(curr) ans.push_back(curr->data);

            int i=0;
            ListNode* dir=head;
            while(dir != nullptr){
                dir->data=ans[i];
                i++;
                dir=dir->next;
            }
            return head;
        }
};