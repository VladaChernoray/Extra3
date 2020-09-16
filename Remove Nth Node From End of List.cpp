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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fict = new ListNode();
        fict->next = head;
        ListNode* first = fict;
        ListNode* second = fict;

        while ((n--) + 1) {
            second = second->next;
        }
        while (second != NULL) {
            first = first->next, second = second->next;
        }

        ListNode* temp = first->next;
        first->next = temp->next;

        return fict->next;
    }
};