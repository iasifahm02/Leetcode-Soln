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
    void insertNode(ListNode* &head, ListNode* &tail, int data){
        if(head == NULL){
            ListNode* temp = new ListNode(data);
            head = temp;
            tail = temp;
        }
        else{
            ListNode* temp = new ListNode(data);
            tail->next = temp;
            tail = temp;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* head = NULL;
        ListNode* tail = NULL;

        int carry = 0;
        while(temp1 != NULL || temp2 != NULL){
            int val1 = 0;
            if(temp1 != NULL) val1 = temp1->val;
            int val2 = 0;
            if(temp2 != NULL) val2 = temp2->val;

            int sum = val1 + val2 + carry;
            carry = sum/10; 
            sum = sum%10;

            //Create & Insert Node
            insertNode(head, tail, sum);
            if(temp1 != NULL)
                temp1 = temp1->next;
            if(temp2 != NULL)
                temp2 = temp2->next;
        }

        while(carry != 0){
            insertNode(head, tail, carry);
            carry = carry/10;
        }

        return head;
    }
};