#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("����һ���ַ���\n");
	char ch;
	int i, count = 0, word = 0;
	while ((ch = getchar()) != '\n')
	if (ch == ' ')
		word = 0;
	else if (word == 0)
	{
		word = 1;
		count++;
	}
	printf("�ܹ��� %d ������\n", count);
	return 0;
}