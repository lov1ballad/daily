#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//十六进制变十进制 int main()
//{
//	printf("%15d", 0XABCDEF);
//	return 0;
//}
//输出printf的返回值 int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//}
int main()
{
	int num;
	float s1, s2, s3;
	scanf("%d;%f,%f,%f", &num, &s1, &s2, &s3);
	printf("The each subject score of  No. %d is %.3f, %.2f, %.2f", num, s1, s2, s3);
	return 0;
}