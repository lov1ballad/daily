#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int insort(int s[], int n)    /* �Զ��庯�� insort()*/
{
	int i, j;
	for (i = 2; i <= n; i++)    //�����±��2��ʼ��s[0]�������ڣ�s[1]һ�������޿ɱ���
	{
		s[0] = s[i];    //���������ֵ
		j = i - 1;    //ȷ��Ҫ�Ƚ�Ԫ�ص����ұ�λ��
		while (s[0]<s[j])
		{
			s[j + 1] = s[j];    //��������
			j--;    //���������һ��δ�Ƚϵ���
		}
		s[j + 1] = s[0];    //��ȷ����λ�ò���s[i]
	}
	return 0;
}
int main()
{
	int a[11], i;    //�������鼰����Ϊ��ľ��˦
	printf("������10�����ݣ�\n");
	for (i = 1; i <= 10; i++)
		scanf("%d", &a[i]);    //���մӼ��������10�����ݵ�����a��
	printf("ԭʼ˳��\n");
	for (i = 1; i<11; i++)
		printf("%5d", a[i]);    //��δ����ǰ��˳�����
	insort(a, 10);    //�����Զ��庯�� insort()
	printf("\n �������������˳��\n");
	for (i = 1; i<11; i++)
		printf("%5d", a[i]); //���������������
	printf("\n");
	return 0;
}