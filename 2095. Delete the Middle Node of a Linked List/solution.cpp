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
    int LinkListcount(ListNode* head) {
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }
        return count;
    }

public:
    ListNode* deleteMiddle(ListNode* head) {
        // Count the number of nodes in the linked list
        int length = LinkListcount(head);

        // Handle the case where the linked list is empty or has only one node (no middle to delete)
        if (length <= 1) {
            return nullptr;
        }

        // Calculate the position of the middle node
        int middle = length / 2;

        // Initialize pointers to traverse the list
        ListNode* prev = nullptr;
        ListNode* curr = head;

        // Traverse to the middle node
        for (int i = 0; i < middle; i++) {
            prev = curr;
            curr = curr->next;
        }

        // Delete the middle node by adjusting the 'next' pointers
        prev->next = curr->next;

        // Deallocate memory for the removed node (optional, depending on your system's memory management)

        return head;
    }
};
