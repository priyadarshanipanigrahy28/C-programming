//Area of circle and square

#include<stdio.h>
int main()
{
	float r,s,area;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("\nArea of circle is:%.2f",area);
	printf("\nEnter the side of square:");
	scanf("%f",&s);
	printf("\nArea of square is:%.2f",s*s);
}
