#include<stdio.h>
#include<conio.h>

int ack(int m,int n)
{
if(m==0)
{
    return n+1;
}
else if((m>0)&&(n==0))
{
    return ack(m-1,1);
}
else if((m>0)&&(n>0))
{
    return ack(m-1,ack(m,n-1));
}
else if((m<0)&&(n<0))
{
   return printf("Enter the Correct Value !");
}
}

void main()
{
int m,n,A;
printf("Enter m :");
scanf("%d",&m);
printf("Enter n :");
scanf("%d",&n);
A=ack(m,n);
printf("Ans is %d",A);

}