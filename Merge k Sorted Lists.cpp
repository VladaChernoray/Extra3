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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temp = new ListNode();
        ListNode* ptr = temp;
        vector<int> map = {};

        for (int i = 0; i < lists.size(); i++) {
            while (lists[i] != NULL) {
                map.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }

        sort(map.begin(), map.end());
        for (auto x : map) {
            ptr->next = new ListNode(x);
            ptr = ptr->next;
        }

        ptr = temp->next;
        delete temp;
        return ptr;
    }
};