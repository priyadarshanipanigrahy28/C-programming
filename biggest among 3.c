//find the biggest number in 3 number without using loop or conditional statements

#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter first value:");
	scanf("%d",&a);
	printf("Enter second value:");
	scanf("%d",&b);
	printf("Enter third value:");
	scanf("%d",&c);
	
	max=a;
	max=(max<=b)*b+(max>=b)*max;
	max=(max<=c)*c+(max>=c)*max;
	
	printf("Biggest number is:%d",max);
}
