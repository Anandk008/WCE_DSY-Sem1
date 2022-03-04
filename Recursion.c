#include<stdio.h>

int factorial(int num)
{
	if(num == 0)
		return 1;
	else
		return(num*factorial(num-1));
}
int main()
{
	int fact;
	printf("\nEnter Number to Find Its Factorial :");
	scanf("%d",&fact);
	printf("\nFactorial of %d is : %d\n",fact,factorial(fact));
	return 0;
}