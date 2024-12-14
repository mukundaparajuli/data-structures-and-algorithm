/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode* l1;
       ListNode* l2;
       ListNode* fast  = head;
       ListNode* slow  = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
    ListNode* prev = nullptr;
        while(slow!= nullptr){
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow= nextNode;
        }
        l1= head;
        l2= prev;
        while(l1!=nullptr && l2 != nullptr){
            if( l1->val != l2->val) return false;
            l1=l1->next;
            l2= l2->next;
        }
        return true;
    }
};