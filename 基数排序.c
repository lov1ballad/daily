#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"//需要用来构造基数
#define K 2 //三位数
#define RADIX 10 //10个基数
SList list[RADIX];
int GetKey(int value, int k)
{
	int key;
	while (k >= 0)
	{
		key = value % 10;
		value /= 10;
		k--;
	}
	return key;
}

void Distribute(int* ar, int left, int right, int k)
{
	for (int i = left; i < right; ++i)
	{
		int key = GetKey(ar[i], k);
		SListPushBack(&list[key], ar[i]);//放入数据
	}
}

void Collect(int* ar)
{
	int k = 0;
	for (int i = 0; i < RADIX; ++i)
	{
		SListNode* p = list[i].head;
		while (p != NULL)
		{
			ar[k++] = p->data;
			p = p->next;
		}
	}
	for (int i = 0; i < RADIX; ++i)//清除链表
		SListClear(&list[i]);
}

void RadixSort(int* ar, int left, int right)
{
	for (int i = 0; i < RADIX; ++i)
		SListInit(&list[i]);
	for (int i = 0; i < K; ++i)
	{
		//分发
		Distribute(ar, left, right, i);

		//回收
		Collect(ar);
	}

}