#include<stdio.h>
#include<math.h>
#define pi 3.14
main()
{
	int a,b,c,bc;
	float acosvalue,x,y,value;
	printf("enter the numer a:\n");
	scanf("%d",&a);
	printf("enter the numer b:\n");
	scanf("%d",&b);
	printf("enter the numer c:\n");
	scanf("%d",&c);
	x=b^2+c^2-a^2;
	y=x/bc;
	y/=2;
	acosvalue=acos(y);
	printf("cosA of the tringle:%f",acosvalue);
	return 0;
	
}
