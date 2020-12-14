#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
float collect(float s, float t, int m, float(*p)(float x));
float fun1(float x);
float fun2(float x);
float fun3(float x);
float fun4(float x);
int main()
{
	int n, flag;
	float a, b, v = 0.0;
	printf("Input the count range(from A to B)and the number of sections.\n");
	scanf("%f%f%d", &a, &b, &n);
	printf("Enter your choice£º'1' for fun1,'2' for fun2,'3' for fun3,'4' for fun4==>");
	scanf("%d", &flag);
	if (flag == 1)
		v = collect(a, b, n, fun1);
	else if (flag == 2)
		v = collect(a, b, n, fun2);
	else if (flag == 3)
		v = collect(a, b, n, fun3);
	else
		v = collect(a, b, n, fun4);
	printf("v=%f\n", v);
	return 0;
}
float collect(float s, float t, int n, float(*p)(float x))
{
	int i;
	float f, h, x, y1, y2, area;
	f = 0.0;
	h = (t - s) / n;
	x = s;
	y1 = (*p)(x);
	for (i = 1; i <= n; i++)
	{
		x = x + h;
		y2 = (*p)(x);
		area = (y1 + y2)*h / 2;
		y1 = y2;
		f = f + area;
	}
	return (f);
}
float fun1(float x)
{
	float fx;
	fx = x*x - 2.0*x + 2.0;
	return(fx);
}
float fun2(float x)
{
	float fx;
	fx = x*x*x + 3.0*x*x - x + 2.0;
	return(fx);
}
float fun3(float x)
{
	float fx;
	fx = x*sqrt(1 + cos(2 * x));
	return(fx);
}
float fun4(float x)
{
	float fx;
	fx = 1 / (1.0 + x*x);
	return(fx);
}