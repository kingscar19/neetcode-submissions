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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int idx = 0;
        while(temp != NULL) {
            temp = temp->next;
            idx++;
        }
        int x = 0;
        ListNode* mid = head;
        while(x < (idx/2)) {
            mid = mid->next;
            x++;
        }
        return mid;
    }
};