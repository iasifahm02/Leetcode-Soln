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
private:
    void reverse(ListNode* &head, ListNode* &curr, ListNode* &prev){
        //Base Case
        if(curr == NULL){
            head = prev;
            return;
        }

        //recursion call
        reverse(head, curr->next, curr);
        curr->next = prev;
    }
public:
    ListNode* reverseList(ListNode* head) {
        // ListNode* curr = head;
        // ListNode* prev = NULL;
        // reverse(head, curr, prev);
        // return head;

        //Recursive approach 2 / Base case
        if(head == NULL || head->next == NULL){ //single node or empty already reversed
            return head;
        }

        //Recursive call > aage ki list reverse krlo
        ListNode* forward = head->next;
        ListNode* miniHead = reverseList(forward);
        forward -> next = head;;
        head->next = NULL;
        return miniHead;;
    }
};