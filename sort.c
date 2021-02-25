#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

void Swap(int* a, int* b)//½»»»
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void TestSortEfficient()
{

}

void PrintArray(int* ar, int left, int right)
{
	for (int i = left; i < right; ++i)
		printf("%d ", ar[i]);
	printf("\n");
}

void InsertSort(int* ar, int left, int right)
{
	for (int i = left + 1; i < right; ++i)
	{
		int k = left;
		while (ar[i] > ar[k])
			k++;
		int tmp = ar[i];
		for (int j = i; j > k; --j)
			ar[j] = ar[j - 1];
		ar[k] = tmp;
	}
}

void InsertSort_2(int* ar, int left, int right)
{
	for (int i = left; i < right; ++i)
	{
		int j = i;
		while (j > left && ar[j] < ar[j - 1])
		{
			Swap(&ar[j], &ar[j - 1]);
			j--;
		}
	}
}