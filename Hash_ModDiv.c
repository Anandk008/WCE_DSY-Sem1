#include<stdio.h>

#define size 7

int arr[size];


void init()
{   
    int i;
    for(i = 0; i < size; i++)
        arr[i] = -1;
}

void insert(int value)
{   
    int key = value % size;
    
    if(arr[key] == -1)
    {   
        arr[key] = value;
        printf("\n%d inserted at arr[%d]\n", value,key);
    }
    else
    {   
        printf("\n Collision : arr[%d] has element %d already !!! \n",key,arr[key]);
        printf(" Unable to insert %d !!!\n",value);
    }
}

void del(int value)
{
    int key = value % size;
    if(arr[key] == value)
        arr[key] = -1;
    else
        printf("\n%d Not Present in the Hash Table\n",value);
}

void search(int value)
{
    int key = value % size;
    if(arr[key] == value)
        printf("\nSearch Found at %d\n",arr[key]);
    else
        printf("\nSearch Not Found\n");
}

void print()
{
    int i;
    for(i = 0; i < size; i++)
        printf("arr[%d] = %d\n",i,arr[i]);
}

int main()
{
    init();
    int n,x;
    while(n != 0){
        printf("\n****************************************\n");
        printf("\n __________ Modulous Hashing __________\n");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\n _____________ Main Menu _____________\n");
    	printf("\n\t1.Insert Element in Hash Table\n\t2.Delete Element of Hash Table\n\t3.Search in Hash Table\n\t4.Print th Hash Table\n");
        printf("\n#########################################\n");
        printf("\n Enter your Choice : ");
    	scanf("%d",&n);
    	switch(n)
    	{
    	case 1: 
  	   	 printf("\nEnter the Value : ");
	   	 scanf("%d",&x);
	   	 insert(x);
	   	 break;
  	    
   	 case 2: 
	   	 printf("\nEnter the Value : ");
	   	 scanf("%d",&x);
	   	 del(x);
	   	 break;

   	 case 3: 
	    	printf("Enter the Value : ");
	    	scanf("%d",&x);
	    	search(x);
	    	break;

    	case 4:	 
		 print();
	    	 break;

    	default: 
		 printf("Invalid Input ! Enter correct Choice !!!");
	         break;	    
        }
    }

    return 0;
}