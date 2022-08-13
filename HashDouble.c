#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10

int h[TABLE_SIZE]= { NULL };

void insert()
{
    int key,index,i,flag=0,hkey,hash2;
    printf("\nEnter a Value to Insert into Hash Table : ");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    hash2 = 7-(key %7);
    for(i=0;i<TABLE_SIZE;i++)
    {
    index=(hkey+i*hash2)%TABLE_SIZE;
    if(h[index] == NULL)
        {
            h[index]=key;
            break;
        }
    }
    if(i == TABLE_SIZE)
     printf("\nElement cannot be Inserted !!!\n");
}

void search()
{

    int key,index,i,flag=0,hash2,hkey;
    printf("\nEnter Element to be Searched :\n");
    scanf("%d",&key);
    hkey=key%TABLE_SIZE;
    hash2 = 7-(key %7);
    for(i=0;i<TABLE_SIZE; i++)
    {
        index=(hkey+i*hash2)%TABLE_SIZE;
        if(h[index]==key)
        {
        printf("\nValue is found at index %d",index);
        break;
        }
    }
    if(i == TABLE_SIZE)
    printf("\nValue is not found !!!\n");
}

void display()
{

    int i;
    printf("\nElements in the Hash Table are : \n");
    for(i=0;i< TABLE_SIZE; i++)
    printf("\nat index %d \t value =  %d",i,h[i]);

}

int main()
{
    int opt,i;
    while(1)
    {
        printf(" \n~~~~~~~~~ Double Hashing Technique ~~~~~~~~~ \n");
        printf("\n\t1. Insert \n\t2. Display \n\t3. Search \n\t4.Exit \n");
        printf(" \n############################################ \n");
        printf("\n Enter the Choice : ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
    return 0;
}