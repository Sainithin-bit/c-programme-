#include<stdio.h>
#include<math.h>
int main()
{
	int h,k,r,s,b;
	float cl;
	printf("enter the h:");
	scanf("%d",&h);
	printf("enter the k:");
	scanf("%d",&k);
	printf("enter the r:");
	scanf("%d",&r);
	printf("enter the s:");
	scanf("%d",&s);
	b=s-h;
	cl=(sqrt(r^2-b^2))*2;
	printf("chord length:%f",cl);
	return 0;
	
	
}
