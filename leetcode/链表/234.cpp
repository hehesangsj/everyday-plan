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
        if (head == nullptr){
            return true;
        }
        ListNode* mid = midList(head);
        mid->next = reverse(mid->next);
        ListNode* temp1 = head;
        ListNode* temp2 = mid->next;
        while (temp2 != nullptr){
            if (temp1->val != temp2->val){
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        mid->next = reverse(mid->next);
        return true;
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* cur = head;
        ListNode* newHead = head;
        while (cur != nullptr){
            ListNode* temp = cur->next;
            newHead = cur;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return newHead;
    }

    ListNode* midList(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while (true){
            if (fast->next == nullptr){
                break;
            }
            if (fast->next->next == nullptr){
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
