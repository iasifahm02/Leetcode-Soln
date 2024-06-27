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
    int getLength(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }

    ListNode* kReverse(ListNode* &head, int k){
        //base case
        if(head == NULL) return NULL;

        // Check the group should be reverse or not
        int len = getLength(head);
        if(k > len){
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        int count = 0;
        // 1 case solve krdunga, baaki recursion smbhal lega
        while(curr != NULL && count < k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        //Recursive call, baaki ke cases
        if(forward != NULL){
            head->next = kReverse(forward, k);
        }

        return prev;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // int len = getLength(head);
        // int cycle = len/k;
        head = kReverse(head, k);
        return head;
    }
};