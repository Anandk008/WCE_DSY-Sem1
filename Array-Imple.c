#include<stdio.h>
#include<stdlib.h>

int stack_arr[4];
int top = -1;
// Push Operation
 void push(){
     int x;
     printf("Enter The Value :");
     scanf("%d",&x);
     printf("\n  \n");
     if(top == 3){
         printf("Stack Is Overflow !!!");
         printf("\n  \n");
     }
     else{
         top ++;
         stack_arr[top] = x;
     }
 }
//Pop Operation
void pop(){
    int delitem;
    if(top == -1){
        printf("Stack Is Empty - Underflow");
        printf("\n  \n");
    }
    else{
        delitem = stack_arr[top];
        top --;
        printf("%d Is Deleted Successfully !!!",delitem);
        printf("\n  \n");
    }
}
//Peek Operation
void peek(){
    if(top == -1){
        printf("Stack Is Empty !!!");
        printf("\n  \n");
    }
    else{
        printf("The Topmost Element is : %d",stack_arr[top]);
        printf("\n  \n");
    }
}
//Display Operation
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("\n > %d ",stack_arr[i]);
    }
}
//Driver Code
int main(){
    int choice;
    while(1){
        printf("\n  \n");
        printf("\n ********************Main Menu**********************       \n");
        printf("\n ################ Enter The Choice  ################       \n");
        printf("\n ===================================================       \n");
        printf("\n\t1. For Pushing element \n");
        printf("\n\t2. For Popping Element \n");
        printf("\n\t3. For Displaying the Element at top \n");
        printf("\n\t4. For Priting the Stack \n");
        printf("\n\t5. To Exit \n");
        printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n  \n");
        printf("\n Enter Your Choice : ");
        scanf("%d",&choice);
        printf("\n  \n");

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Incorrect Choice\n");
        }
    }
    return 0;
}