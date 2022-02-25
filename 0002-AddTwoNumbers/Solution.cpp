/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *head = new ListNode(-1);
		ListNode *temp = head;

		int sum = 0;
		int carry = 0;
		while (l1 || l2 || carry) {
			sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
			carry = sum / 10;

			temp->next = new ListNode(sum % 10);
			temp = temp->next;

			l1 = l1 ? l1->next : l1;
			l2 = l2 ? l2->next : l2;
		}

		temp = head;
		head = head->next;
		delete temp;

		return head;
	}
};
