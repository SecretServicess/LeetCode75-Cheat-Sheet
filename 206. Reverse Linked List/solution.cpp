class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // If the input linked list is empty or has only one node, 
        // it's already reversed (or there's nothing to reverse), so return it as is.
        if (head == NULL) {
            return NULL;
        }

        ListNode* prev = NULL; // Initialize a pointer to keep track of the previous node (initially NULL).
        ListNode* curr = head; // Initialize a pointer to the current node, starting from the head.
        ListNode* forward = NULL; // Initialize a pointer to the next node (initially NULL).

        while (curr != NULL) {
            forward = curr->next; // Store the next node in the 'forward' pointer.

            // Reverse the direction of the current node's 'next' pointer.
            curr->next = prev;

            prev = curr; // Move the 'prev' pointer one step forward.
            curr = forward; // Move the 'curr' pointer one step forward.
        }

        // At this point, 'prev' is pointing to the new head of the reversed linked list,
        // and 'curr' is NULL, indicating the end of the original list (now reversed).
        return prev;
    }
};
