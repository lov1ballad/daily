#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int shsort(int s[], int n)    /* �Զ��庯�� shsort()*/
{
	int i, j, d;
	d = n / 2;    /*ȷ���̶�����ֵ*/
	while (d >= 1)
	{
		for (i = d + 1; i <= n; i++)    /*�����±��d+1��ʼ����ֱ�Ӳ�������*/
		{
			s[0] = s[i];    /*���ü�����*/
			j = i - d;    /*ȷ��Ҫ���бȽϵ�Ԫ�ص����ұ�λ��*/
			while ((j>0) && (s[0]<s[j]))
			{
				s[j + d] = s[j];    /*��������*/
				j = j - d;    /*������d��λ��V*/
			}
			s[j + d] = s[0];    /*��ȷ����λ�D����s[i]*/
		}
		d = d / 2;    /*�����Ϊԭ����һ��*/
	}
	return 0;
}

int main()
{
	int a[11], i;    /*�������鼰����Ϊ��������*/
	printf("������ 10 �����ݣ�\n");
	for (i = 1; i <= 10; i++)
		scanf("%d", &a[i]);    /*�Ӽ���������10������*/
	shsort(a, 10);    /* ���� shsort()����*/
	printf("������˳���ǣ�\n");
	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);    /*�������������*/
	printf("\n");
	return 0;
}