#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/947f6eb80d944a84850b0538bf0ec3a5?tpId=13&tqId=11179&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey.
/**
* struct TreeNode {
*	int val;
*	struct TreeNode *left;
*	struct TreeNode *right;
* };
*/

/**
*
* @param pRootOfTree TreeNode类
* @return TreeNode类
*/

//二叉搜索树的中序遍历就是由小到大的顺序排序
void ConvertList(struct TreeNode* t, struct TreeNode** pre)//转换为链表
{
	if (t == NULL)
		return;
	ConvertList(t->left, pre);
	t->left = *pre;
	if (*pre != NULL)
		(*pre)->right = t;
	*pre = t;
	ConvertList(t->right, pre);
}
struct TreeNode* Convert(struct TreeNode* pRootOfTree)
{
	if (pRootOfTree == NULL)
		return NULL;
	struct TreeNode* pre = NULL;
	ConvertList(pRootOfTree, &pre);

	struct TreeNode* pHead = pre;
	while (pHead->left != NULL)//将指针从最后一位移到第一位
		pHead = pHead->left;
	return pHead;
}
