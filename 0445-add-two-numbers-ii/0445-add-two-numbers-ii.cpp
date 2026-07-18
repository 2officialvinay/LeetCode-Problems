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
    ListNode* reverse(ListNode* head){

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr->next;

        while(curr != NULL){
            curr->next = prev;
            prev = curr;
            curr = forward;
            if(forward != NULL)
                forward = forward->next;
        }

        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* dummyNode = new ListNode(0);
        ListNode* dummy = dummyNode;

        int carry = 0;
        while(l1 != NULL && l2 != NULL){
            int Node = l1->val + l2->val + carry;
            int digit = Node%10;
            carry = Node/10;
            ListNode* newNode = new ListNode(digit);
            dummy->next = newNode;
            dummy = dummy->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != NULL){
            int Node = l1->val + carry;
            int digit = Node%10;
            carry = Node/10;
            ListNode* newNode = new ListNode(digit);
            dummy->next = newNode;
            dummy = dummy->next;
            l1 = l1->next;
        }

        while(l2 != NULL){
            int Node = l2->val + carry;
            int digit = Node%10;
            carry = Node/10;
            ListNode* newNode = new ListNode(digit);
            dummy->next = newNode;
            dummy = dummy->next;
            l2 = l2->next;
        }

        while(carry != 0){
            int Node = carry;
            int digit = Node%10;
            carry = Node/10;
            ListNode* newNode = new ListNode(digit);
            dummy->next = newNode;
            dummy = dummy->next;
        }

        return reverse(dummyNode->next);
    }
};