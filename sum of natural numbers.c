//Sum of natural numbers(without  using loop)

#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter a value upto which you want the sum:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("Sum of %d number is %d",n,sum);
}
