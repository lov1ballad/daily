#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int shsort(int s[], int n)    /* 自定义函数 shsort()*/
{
	int i, j, d;
	d = n / 2;    /*确定固定增虽值*/
	while (d >= 1)
	{
		for (i = d + 1; i <= n; i++)    /*数组下标从d+1开始进行直接插入排序*/
		{
			s[0] = s[i];    /*设置监视哨*/
			j = i - d;    /*确定要进行比较的元素的最右边位置*/
			while ((j>0) && (s[0]<s[j]))
			{
				s[j + d] = s[j];    /*数据右移*/
				j = j - d;    /*向左移d个位置V*/
			}
			s[j + d] = s[0];    /*在确定的位罝插入s[i]*/
		}
		d = d / 2;    /*增里变为原来的一半*/
	}
	return 0;
}

int main()
{
	int a[11], i;    /*定义数组及变量为基本整型*/
	printf("请输入 10 个数据：\n");
	for (i = 1; i <= 10; i++)
		scanf("%d", &a[i]);    /*从键盘中输入10个数据*/
	shsort(a, 10);    /* 调用 shsort()函数*/
	printf("排序后的顺序是：\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);    /*输出排序后的数组*/
	printf("\n");
	return 0;
}