#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int hun, ten, ind, n;
	printf("result is:");
	for (n = 100; n<1000; n++)  /*������ȡֵ��Χ*/
	{
		hun = n / 100;
		ten = (n - hun * 100) / 10;
		ind = n % 10;
		if (n == hun*hun*hun + ten*ten*ten + ind*ind*ind)  /*��λ�ϵ��������Ƿ���ԭ��n���*/
			printf("%d  ", n);
	}
	printf("\n");

	return 0;
}