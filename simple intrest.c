//Calculate simple intrest

#include<stdio.h>
int main()
{
	int p,r;
	float t,si;
	printf("Enter priniple amount:");
	scanf("%d",&p);
	printf("Enter time:");
	scanf("%f",&t);
	printf("Enter rate of intrest:");
	scanf("%d",&r);
	
	si=p*t*r/100;
	
	printf("Simple intrest is:%.2f",si);
}
