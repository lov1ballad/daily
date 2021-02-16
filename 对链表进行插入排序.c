#define _CRT_SECURE_NO_WARNINGS 1
/**https://leetcode-cn.com/problems/insertion-sort-list/
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* insertionSortList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
	p->next = head;//²åÈëÍ·²¿
	while (head != NULL && head->next != NULL)
	{
		if (head->val <= head->next->val)
		{
			head = head->next;
			continue;
		}
		struct ListNode* pre = p;
		while (pre->next->val <= head->next->val)
		{
			pre = pre->next;
		}
		struct ListNode* tmp = head->next;
		head->next = head->next->next;
		tmp->next = pre->next;
		pre->next = tmp;
	}
	return p->next;

}