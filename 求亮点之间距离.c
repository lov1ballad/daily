#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
struct point
{
	float x;
	float y;
	float z;
};
float dist(struct point p1, struct point p2)
{
	float x, y, z;
	float d;
	x = fabs(p1.x - p2.x);
	y = fabs(p1.y - p2.y);
	z = fabs(p1.z - p2.z);
	d = sqrt(x*x + y*y + z*z);
	return d;
}
int main()
{
	struct point p1, p2;
	printf("Enter point1£º");
	scanf("%f,%f,%f", &p1.x, &p1.y, &p1.z);
	printf("Enter point2£º");
	scanf("%f,%f,%f", &p2.x, &p2.y, &p2.z);
	printf("distance: %f\n", dist(p1, p2));
	return 0;
}