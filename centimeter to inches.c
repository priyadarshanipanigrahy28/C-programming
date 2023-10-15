//Convert centimeter  to inches

#include<stdio.h>
int main()
{
	float cm,in;
	printf("Enter value in centimeter:");
	scanf("%f",&cm);
	in=cm*0.3937;
	printf("The value in inches is:%.2f",in);
}
