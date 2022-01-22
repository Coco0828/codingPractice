class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode *ctr = new ListNode(0, head);
            ListNode *temp = new ListNode(0, head);
        
            if(head == NULL) {
                return NULL;
            }
        
            int len = 0;
        
            while (ctr->next->next != NULL) {
                ++len;
                if(len <= n) {
                    ctr->next = ctr->next->next;
                } else {
                    ctr->next = ctr->next->next;
                    temp->next = temp->next->next;
                }
            }

            if((n - len) == 1) {
                return head->next;
            } else {
                temp->next->next = temp->next->next->next;
                return head;
            }
        }
};
