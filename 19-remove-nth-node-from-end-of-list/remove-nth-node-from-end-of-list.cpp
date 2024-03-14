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
    int length(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) return NULL;

        ListNode* curr = head;
        ListNode* prev = NULL;

        int position = length(head) - n;
        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if(position == 0){ //Case 1 -> [1, 2], n = 2
            head = head->next;
        }
        if(curr != NULL && prev != NULL){
            prev->next = curr->next;
        }
        curr->next = NULL;
        return head;
    }
};