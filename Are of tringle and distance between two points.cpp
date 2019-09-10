#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float slope ;
	printf("enter the point a:\n");
	scanf("%d",&a);
	printf("enter the point b:\n");
	scanf("%d",&b);
	printf("enter the point c:\n");
	scanf("%d",&c);
    slope=a/b;
    printf("slope of the line:%f",slope);
    
	return 0;
}
