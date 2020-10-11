//implementing linear queue using array
// program by Subhodeep Moitra
#include <stdio.h>
#include <stdlib.h>
#define MAX 3 // preprocessor directive to declare the maximum size of the array
 int QUEUE[MAX],front=-1,rear=-1;
 /* function        :   insert_in_Q(),
    to push an item into queue.
*/
void insert_in_Q(int queue[],int ele)
{
    if(rear==-1)//if the rear is -1 then the queue is empty and data could be updated over it
    {
        front=rear=0;
        queue[rear]=ele;
    }
    else if(rear==MAX-1)//when there is no space available to store data in the queue
    {
        printf("\nQUEUE is full.\n");
        return;//as the method has a void return datatype hence the method returns nothing
    }
    else
    {//case for inserting the data 
        rear++;
        queue[rear]=ele;
    }
    printf("\nItem inserted..");
}
 /* function : display_Q(),
    to display queue elements
*/
 void display_Q(int queue[])//method for displaying the elements of the queue
{       int i;// variable to be used for iteration
    if(rear==-1) { printf("\nQUEUE is Empty."); return; }
    for(i=front;i<=rear;i++)
    { printf("%d,",queue[i]); }
 }
 /* function : remove_from_Q(),
    to remove an item from queue.
*/
void remove_from_Q(int queue[])
{
    int ele;//variable to store the data in the queue
    if(front==-1)//if the value of the front is -1 , then the queue is empty
    {
        printf("QUEUE is Empty.");
        return;// as the method has nothing to retuen hence 
    }
    else if(front==rear)//when only one data is present in the queue
    {
        ele=queue[front];
        front=rear=-1;
    }
    else
    {
        ele=queue[front];
        front++;//after removing the data front increases by one
    }
    printf("\nItem removed : %d.",ele);
}
 int main()
{// body of the main method
    int ele,choice; 
	/*ele is to accept the data from the user to be updated into the queue
	  choice is to accept the case number from the user to the switch case section */
     while(1)//turning on an infinity loop which will iterate till the user terminates the program
	 {
        printf("\nQUEUE Elements are :");
        display_Q(QUEUE);//for displaying the elements of the queue before the starting of each case for proper analysis of the program
        printf("\n\n************Enter choice***************\n1:Insert\n2:Display\n3:Remove\n0:Exit\n");
        scanf("%d",&choice);
        switch(choice)//start of the switch case segment of the main method
        {
          case 0:
            exit(1);
            break;
        case 1:
            printf("Enter an element to insert:");
            scanf("%d",&ele);
            insert_in_Q(QUEUE,ele);
            break;
        case 2:
            display_Q(QUEUE);
            break;
        case 3:
            remove_from_Q(QUEUE);
            break;
        default:
            printf("\nInvalid choice\n");
            break;
    }
 } //end of while(1)
    return 0;/*if the program executes successfully then the main method will return
    a success report of the code 0 */
}

