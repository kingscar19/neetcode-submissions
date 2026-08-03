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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> a;
        while(temp != NULL) {
            a.push_back(temp->val);
            temp = temp->next;
        }

        int f = 0;
        int r = a.size() - 1;

        while(f <= r) {
            if(a[f] == a[r]) {
                f++;
                r--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};