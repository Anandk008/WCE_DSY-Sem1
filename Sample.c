#include<stdio.h>


int main()
{
    int c;
    printf("Enter no. of count : ");
    scanf("%d",&c);
    for(int i = 0 ; i < 5 ;i++)
    {
  
        for(int j = 0 ;j < i; j++)
        {
            printf("     ");
        }
        printf("%d\n",i);

    }
    return 0;
}