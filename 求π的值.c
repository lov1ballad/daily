#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float s = 1;
	float pi = 0;
	float i = 1.0;
	float n = 1.0;
	while (fabs(i) >= 1e-6){
		pi += i;
		n = n + 2;
		// ������Ƶĺ����ÿ�������Ŷ���һ�� 
		s = -s;
		i = s / n;
	}
	pi = 4 * pi;
	printf("pi��ֵΪ��%.6f\n", pi);

	return 0;
}