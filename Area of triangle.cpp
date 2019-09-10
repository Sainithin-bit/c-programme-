#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float  di;
	printf("enter the point a:\n");
	scanf("%d",&a);
	printf("enter the point b:\n");
	scanf("%d",&b);
	printf("enter the point c:\n");
	scanf("%d",&c);
	printf("enter the point d:\n");
	scanf("%d",&a);
	di=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	printf("distance between two points is:%f",di);
	return 0;
}
