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
    ListNode* arrayToLinkedList(vector<int> &nums) {
        if(nums.empty()) return nullptr;
        ListNode* head = new ListNode(nums[0]);
        ListNode* prev = head;
        for(int i=1;i<nums.size();i++){
            ListNode* temp = new ListNode(nums[i], nullptr, prev);
            prev->next=temp;
            prev=temp;
        }
        return head;
    }
};