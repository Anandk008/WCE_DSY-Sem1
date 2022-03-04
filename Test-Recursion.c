#include<stdio.h>

int factorial(int num)
{
    if(num == 1)
    return 1;
    if(num != 1)
    return (num-1);
}
int main()
{   
    int fact; 
    printf("\n Enter the number to find its Factorial :");
    scanf("%d",&fact);
    factorial(fact);
    printf("The Factorial is %d ",fact);
    return 1;
}