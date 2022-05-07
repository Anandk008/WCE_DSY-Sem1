#include<stdio.h>

int linearsearch(int a[],int n,int val)
{
    for(int i = 0; i<n;i++)
    {
        if (a[i] == val)
        return i+1;
    }
    return -1;
}
int main()
{
    int a[] = { 10, 20, 30 ,42, 16, 53, 34, 87};
    int val = 16 ;
    int n = sizeof(a) / sizeof(a[0]);
    int res = linearsearch(a, n, val);
    printf("The Elements of the array are :");
    for(int i= 0;i<n;i++)
    printf(" %d,",a[i]);
    printf("\nElement to be searched is - %d",val);
    if(res == -1)
    printf("\nElement is not present in the array");
    else
    printf("\nElement is present at %d position of array",res);
    return 0;
}